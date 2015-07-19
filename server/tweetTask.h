#ifndef TWEET_TASK_H
#define TWEET_TASK_H
#include "tcpApp.h"
namespace tweet {
class TweetTask : public Task_
{
public:
  TweetTask(){}
  virtual Task getHandler(int fd);
  virtual bool handler();
private:
};
}
#endif