#ifndef WAVMAKER_H
#define WAVMAKER_H

#include <string>
#include <random>
#include "singleton.h"

namespace tweet{
#define numSegments 5
#define maxWavs 20
class WavMaker_
{
public:
  std::string modSegments();
  WavMaker_();
  ~WavMaker_();
private:
  uint16_t tweetList[numSegments];
  std::default_random_engine generator;
  std::uniform_int_distribution<uint16_t> segDistribution;
};

typedef Singleton<WavMaker_> WavMaker;
}

#endif