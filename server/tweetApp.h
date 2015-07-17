#ifndef TWEET_APP_H
#define TWEET_APP_H
#include "tcpApp.h"
namespace tweet{
class TweetTask : public TaskInfo
{
public:
  virtual bool handler();
};
  
  
class TweetApp : public TcpApp
{
public:
  TweetApp()
    : TcpApp(6666)
    {}
protected:
  virtual void doAccept(int fd);
private:
};
}
#endif