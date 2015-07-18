#include "tweetApp.h"
#include "basics.h"
#include <string.h>

namespace tweet {
bool DEBUG_TWEET=true;
WavMaker *WavMaker::instance = 0;

WavMaker::WavMaker()
  :segDistribution(0,maxWavs)
{
  generator.seed((std::random_device())());
  for (int i = 0; i < numSegments; i++)
  {
    tweetList[i] = segDistribution(generator);
  }
} 

WavMaker*
WavMaker::the()
{
  if ( !instance )
    instance = new WavMaker;
  return instance;
}

std::string
WavMaker::modSegments()
{
  std::uniform_int_distribution<int> distribution(0,numSegments);
  int choice = distribution(generator);
  tweetList[choice] = segDistribution(generator);
  std::ostringstream oss;
  for ( int i = 0; i < numSegments; ++i)
  { 
    if (i)
      oss << " ";
    oss << tweetList[i];
  }
  oss << std::endl;
  std::string rval= oss.str();
  return rval;
}

void 
TweetApp::doAccept(int fd)
{
  Task tt(new TweetTask());
  tt.get()->fd = fd;
  add(tt);
}

TweetTask::TweetTask() 
{}


bool
TweetTask::handler(Task& ti)
{
  char buff[128];
  memset(buff,0,sizeof(buff));
  int size = read(ti->fd,buff,sizeof(buff));
  DEBUG(TWEET,DUMP(ti->name)<<DUMP(buff)<<DUMP(size));
  if ( strncmp("tweet",buff,strlen("tweet")) )
    return false;
  
  std::string rval = WavMaker::the()->modSegments();
  DEBUG(TWEET,DUMP(rval));
  write(ti->fd,rval.c_str(),strlen(rval.c_str()+1));
  return false;
}
}
  