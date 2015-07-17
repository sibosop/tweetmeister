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
uint32_t TcpApp::id = 0;

TaskInfo::~TaskInfo()
{
  DEBUG(TCP_APP,"closing"<<DUMP(name));
  close(fd);
}
  
  

TcpApp::TcpApp(int port_)
  : port(port_)
{
    acceptFd = socket(AF_INET, SOCK_STREAM, 0);
    ASSERT(acceptFd >= 0);
    
    struct sockaddr_in serv_addr;
    bzero((char *) &serv_addr, sizeof(serv_addr));
    
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    DEBUG(TCP_APP,DUMP(port));
    serv_addr.sin_port = htons(port);
    
    if (bind(acceptFd, (struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0) 
      FAIL("ERROR on binding" << DUMP(errno)<< " "<<strerror(errno));
    
    listen(acceptFd,5);
}

void
TcpApp::add(Task t)
{
  (*t).id = ++id;
  std::ostringstream oss;
  oss << "Task-" << (*t).id;
  (*t).name = oss.str();
  taskList.push_back(t);
}


int
TcpApp::run()
{
  int exit = 0;
  
  while(!exit)
  {
    
    size_t size = taskList.size()+1;
    std::unique_ptr<struct pollfd> pollptr(new struct pollfd[size]);
    pollptr.get()[0].fd = acceptFd;
    pollptr.get()[0].events = POLLIN;
    size_t i;
    for(i = 0; i < taskList.size(); ++i)
    {
      pollptr.get()[i+1].fd = taskList[i].get()->fd;
      pollptr.get()[i+1].events = POLLIN;
    }
    poll(pollptr.get(), size, -1);
    if ( pollptr.get()[0].revents & POLLIN )
    {
      DEBUG(TCP_APP,"accept got connection");
      struct sockaddr_in cli_addr;
      socklen_t clilen = sizeof(cli_addr);
      int fd = accept(acceptFd, 
                   (struct sockaddr *) &cli_addr, 
                   &clilen);
      doAccept(fd);
    }
    TaskList tmp;
    for(i = 1; i < size; ++i)
    {
      if (pollptr.get()[i].revents & POLLIN )
      {
        TaskList::iterator tli;
        for (tli = taskList.begin(); tli != taskList.end(); ++tli)
        {
          if ( (*tli).get()->fd == pollptr.get()[i].fd)
          {
            if (!(*tli).get()->handler())
            {
              taskList.erase(tli);
            }
            break;
          }
        }
      }
    }
  }
  return exit;
}

}