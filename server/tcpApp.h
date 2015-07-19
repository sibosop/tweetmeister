#ifndef TCPAPP_H
#define TCPAPP_H

#include <vector>
#include <unistd.h>
#include "singleton.h"
#include "task.h"


namespace tweet {

class TcpApp_
{
public: 
  TcpApp_() {}
  ~TcpApp_(){}
  int run();
  void addAcceptor(Task,int port);
private:
  typedef std::vector<Task>  TaskList;
  TaskList taskList;
};

typedef Singleton<TcpApp_> TcpApp;

}
#endif