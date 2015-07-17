#include "tweetApp.h"
#include "basics.h"
namespace tweet {
  bool DEBUG_TWEET=true;

void 
TweetApp::doAccept(int fd)
{
  Task tt(new TweetTask());
  tt.get()->fd = fd;
  add(tt);
}
 
bool
TweetTask::handler()
{
  DEBUG(TWEET,DUMP(name));
  return false;
}
}
  