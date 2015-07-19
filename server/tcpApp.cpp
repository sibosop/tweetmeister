#include "tcpApp.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <poll.h>
#include "basics.h"

namespace tweet {
bool DEBUG_TCP_APP=true;


void
TcpApp_::addAcceptor(Task t,int port)
{
  t->afd = socket(AF_INET, SOCK_STREAM, 0);
  ASSERT(t->afd >= 0);
  int optval = 1 ; 

  if (setsockopt(t->afd,SOL_SOCKET,SO_REUSEADDR,&optval,sizeof(int)) == -1) 
    FAIL("setsockopt"<<DUMP(errno)<<strerror(errno)) ;
  
  struct sockaddr_in serv_addr;
  bzero((char *) &serv_addr, sizeof(serv_addr));
  
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_addr.s_addr = INADDR_ANY;
  DEBUG(TCP_APP,DUMP(port));
  serv_addr.sin_port = htons(port);
  
  if (bind(t->afd, (struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0) 
    FAIL("ERROR on binding" << DUMP(errno)<< " "<<strerror(errno));
  
  listen(t->afd,5);
  taskList.push_back(t);
}


int
TcpApp_::run()
{
  int exit = 0;
  std::unique_ptr<struct pollfd[]> pollptr;
  while(!exit)
  {
    size_t i; 
    pollptr.reset(new struct pollfd[taskList.size()]);
    for(i = 0; i < taskList.size(); ++i)
    {
      if ( taskList[i]->isAcceptor() )
        pollptr[i].fd = taskList[i]->afd;
      else
        pollptr[i].fd = taskList[i]->hfd;
      pollptr[i].events = POLLIN;
    }
    poll(pollptr.get(), taskList.size(), -1);
    TaskList newTasks;
    for( i = 0; i < taskList.size();)
    {
      if (pollptr[i].revents & POLLIN )
      {
        if ( taskList[i]->isAcceptor() )
        {
          DEBUG(TCP_APP,"accept got connection");
          struct sockaddr_in cli_addr;
          socklen_t clilen = sizeof(cli_addr);
          int fd = accept(taskList[i]->afd, 
                       (struct sockaddr *) &cli_addr, 
                       &clilen);
          newTasks.push_back(taskList[i]->getHandler(fd));
        }
        if ( taskList[i]->isHandler() )
        {
          if ( !taskList[i]->handler() )
          {
            taskList.erase(taskList.begin() + i);
            continue; // stops advance of iterator
          }
        }
      }
      ++i;
    }
    while ( !newTasks.empty() )
    {
      taskList.push_back(newTasks.back());
      newTasks.pop_back();
    }
  }
  return exit;
}

}