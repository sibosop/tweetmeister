#include "wavMaker.h"

namespace tweet {
WavMaker_::WavMaker_()
  :segDistribution(0,maxWavs)
{
  generator.seed((std::random_device())());
  for (int i = 0; i < numSegments; i++)
  {
    tweetList[i] = segDistribution(generator);
  }
} 

std::string
WavMaker_::modSegments()
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
  std::string rval= oss.str();
  return rval;
}

}