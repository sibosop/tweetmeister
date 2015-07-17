include $(TWEETMEISTER)/Makefile.common

INCLUDES=basics.h
TWEET_PROG=tweetmeister
TWEET_SRCS=$(TWEET_PROG).cpp
TWEET_OBJS=$(TWEET_SRCS:.cpp=.o)

all: depend run


run: $(TWEET_PROG)
	$@
	echo $@ done

$(TWEET_PROG): $(TWEET_OBJS)
	$(CXX) $^ $(LDFLAGS) -o $@


clean: 
	$(RM) $(TESTS) $(TWEET_OBJS) $(TWEET_PROG)

%.o : %.cpp
	echo $(CXX) $(CXXFLAGS)
	$(CXX) $(CXXFLAGS) -c $<

$(TWEET_PROG).o: $(INCLUDES)

depend:
		makedepend -- $(CXXFLAGS) -- $(TWEET_SRCS)

# DO NOT DELETE
