#ifndef TCPAPP_H
#define TCPAPP_H
#include <memory>
#include <vector>
#include <unistd.h>

namespace tweet {
class TaskInfo;
typedef std::shared_ptr<TaskInfo> Task;
  
class TaskInfo
{
public:
  int fd;
  uint32_t id;
  std::string name;
  virtual bool handler(Task&) = 0;
  TaskInfo()
  { 
  }
  ~TaskInfo();
  
};



class TcpApp 
{
public:
  TcpApp(int port_);
  virtual ~TcpApp(){}
  int run();
protected:
  virtual void doAccept(int fd) = 0;
  void add(Task);
private:
  int port;
  int acceptFd;
  static uint32_t id;
  typedef std::vector<Task>  TaskList;
  TaskList taskList;
};
}
#endif