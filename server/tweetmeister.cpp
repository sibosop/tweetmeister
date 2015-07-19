#include "basics.h"
#include "tweetTask.h"
int
main(int argc,char *argv[])
{
  std::cout << "tweet!!!" << std::endl;
  tweet::TcpApp::Instance()->addAcceptor(tweet::Task(new tweet::TweetTask),6666);
  return tweet::TcpApp::Instance()->run();
}