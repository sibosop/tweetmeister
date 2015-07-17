#include "basics.h"
#include "tweetApp.h"
int
main(int argc,char *argv[])
{
  std::cout << "tweet!!!" << std::endl;
  tweet::TweetApp app;
  return app.run();
}