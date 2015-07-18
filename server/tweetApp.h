#ifndef TWEET_APP_H
#define TWEET_APP_H
#include "tcpApp.h"
#include <random>
namespace tweet{
#define numSegments 5
#define maxWavs 20
class WavMaker 
{
public:
  std::string modSegments();
  static WavMaker *the();
private:
  WavMaker();
  static WavMaker *instance;
  uint16_t tweetList[numSegments];
  std::default_random_engine generator;
  std::uniform_int_distribution<uint16_t> segDistribution;
};



class TweetTask : public TaskInfo
{
public:
  TweetTask();
  virtual bool handler(Task&);
private:
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