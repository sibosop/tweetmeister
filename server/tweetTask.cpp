#include "tweetTask.h"
#include "basics.h"
#include <string.h>
#include "wavMaker.h"

namespace tweet {
bool DEBUG_TWEET=true;


Task
TweetTask::getHandler(int fd)
{
  Task rval(new TweetTask);
  rval->setHfd(fd);
  return rval;
}



bool
TweetTask::handler()
{
  char buff[128];
  memset(buff,0,sizeof(buff));
  int size = read(hfd,buff,sizeof(buff));
  if ( size == 0 )
    return false;
  DEBUG(TWEET,DUMP(name)<<DUMP(buff)<<DUMP(size));
  if ( strncmp("tweet",buff,strlen("tweet")) )
    return false;
  
  std::string rval = WavMaker::Instance()->modSegments();
  
  DEBUG(TWEET,DUMP(rval));
  write(hfd,rval.c_str(),strlen(rval.c_str()+1));
  return false;
}
}
  