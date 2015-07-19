#ifndef TASK_H
#define TASK_H
#include <memory>
#include <sstream>
#include <unistd.h>



namespace tweet {
class TcpApp_;


class Task_;
typedef std::shared_ptr<Task_> Task;


class Task_
{
public:
  friend TcpApp_;
  virtual Task getHandler(int fd) = 0;
  virtual bool handler() = 0;
  bool isAcceptor() { return afd != -1; }
  bool isHandler() { return hfd != -1; }
  void setHfd(int fd) { hfd= fd; }
protected:
  int afd;
  int hfd;
  uint32_t id;
  std::string name;

  Task_() : afd(-1) , hfd(-1) { 
    id = ++nextId;
    std::ostringstream oss;
    oss << "task-"<<id;
    name = oss.str();
  }
  ~Task_(){
    if ( isAcceptor() )
      close(afd);
    if ( isHandler() )
      close(hfd);
  }
private:
  static int nextId;
};


}

#endif