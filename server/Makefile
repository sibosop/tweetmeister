include $(TWEET_ROOT)/Makefile.common

INCLUDES=basics.h
TWEET_PROG=tweetmeister
TWEET_SRCS=$(TWEET_PROG).cpp tcpApp.cpp tweetApp.cpp
TWEET_OBJS=$(TWEET_SRCS:.cpp=.o)

all: depend run


run: $(TWEET_PROG)
	./$<
	echo $@ done

$(TWEET_PROG): $(TWEET_OBJS)
	$(CXX) $^ $(LDFLAGS) -o $@


clean: 
	$(RM) $(TESTS) $(TWEET_OBJS) $(TWEET_PROG)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $<

$(TWEET_PROG).o: $(INCLUDES)

depend:
		makedepend -- $(CXXFLAGS) $(DEPEND_FLAGS) -- $(TWEET_SRCS)

# DO NOT DELETE

tweetmeister.o: basics.h /usr/include/c++/4.9/iostream
tweetmeister.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++config.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/os_defines.h
tweetmeister.o: /usr/include/features.h /usr/include/stdc-predef.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/sys/cdefs.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/wordsize.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/gnu/stubs.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/gnu/stubs-hard.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/cpu_defines.h
tweetmeister.o: /usr/include/c++/4.9/ostream /usr/include/c++/4.9/ios
tweetmeister.o: /usr/include/c++/4.9/iosfwd
tweetmeister.o: /usr/include/c++/4.9/bits/stringfwd.h
tweetmeister.o: /usr/include/c++/4.9/bits/memoryfwd.h
tweetmeister.o: /usr/include/c++/4.9/bits/postypes.h
tweetmeister.o: /usr/include/c++/4.9/cwchar /usr/include/wchar.h
tweetmeister.o: /usr/include/stdio.h
tweetmeister.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stdarg.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/wchar.h
tweetmeister.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stddef.h
tweetmeister.o: /usr/include/xlocale.h /usr/include/c++/4.9/exception
tweetmeister.o: /usr/include/c++/4.9/bits/atomic_lockfree_defines.h
tweetmeister.o: /usr/include/c++/4.9/bits/char_traits.h
tweetmeister.o: /usr/include/c++/4.9/bits/stl_algobase.h
tweetmeister.o: /usr/include/c++/4.9/bits/functexcept.h
tweetmeister.o: /usr/include/c++/4.9/bits/exception_defines.h
tweetmeister.o: /usr/include/c++/4.9/bits/cpp_type_traits.h
tweetmeister.o: /usr/include/c++/4.9/ext/type_traits.h
tweetmeister.o: /usr/include/c++/4.9/ext/numeric_traits.h
tweetmeister.o: /usr/include/c++/4.9/bits/stl_pair.h
tweetmeister.o: /usr/include/c++/4.9/bits/move.h
tweetmeister.o: /usr/include/c++/4.9/bits/concept_check.h
tweetmeister.o: /usr/include/c++/4.9/bits/stl_iterator_base_types.h
tweetmeister.o: /usr/include/c++/4.9/bits/stl_iterator_base_funcs.h
tweetmeister.o: /usr/include/c++/4.9/debug/debug.h
tweetmeister.o: /usr/include/c++/4.9/bits/stl_iterator.h
tweetmeister.o: /usr/include/c++/4.9/bits/ptr_traits.h
tweetmeister.o: /usr/include/c++/4.9/bits/predefined_ops.h
tweetmeister.o: /usr/include/c++/4.9/bits/localefwd.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++locale.h
tweetmeister.o: /usr/include/c++/4.9/clocale /usr/include/locale.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/locale.h
tweetmeister.o: /usr/include/c++/4.9/cctype /usr/include/ctype.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/types.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/typesizes.h
tweetmeister.o: /usr/include/endian.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/endian.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/byteswap.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/byteswap-16.h
tweetmeister.o: /usr/include/c++/4.9/bits/ios_base.h
tweetmeister.o: /usr/include/c++/4.9/ext/atomicity.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/gthr.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/gthr-default.h
tweetmeister.o: /usr/include/pthread.h /usr/include/sched.h
tweetmeister.o: /usr/include/time.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/sched.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/pthreadtypes.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/setjmp.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/atomic_word.h
tweetmeister.o: /usr/include/c++/4.9/bits/locale_classes.h
tweetmeister.o: /usr/include/c++/4.9/string
tweetmeister.o: /usr/include/c++/4.9/bits/allocator.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++allocator.h
tweetmeister.o: /usr/include/c++/4.9/ext/new_allocator.h
tweetmeister.o: /usr/include/c++/4.9/new
tweetmeister.o: /usr/include/c++/4.9/bits/ostream_insert.h
tweetmeister.o: /usr/include/c++/4.9/bits/cxxabi_forced.h
tweetmeister.o: /usr/include/c++/4.9/bits/stl_function.h
tweetmeister.o: /usr/include/c++/4.9/backward/binders.h
tweetmeister.o: /usr/include/c++/4.9/bits/range_access.h
tweetmeister.o: /usr/include/c++/4.9/bits/basic_string.h
tweetmeister.o: /usr/include/c++/4.9/bits/basic_string.tcc
tweetmeister.o: /usr/include/c++/4.9/bits/locale_classes.tcc
tweetmeister.o: /usr/include/c++/4.9/streambuf
tweetmeister.o: /usr/include/c++/4.9/bits/streambuf.tcc
tweetmeister.o: /usr/include/c++/4.9/bits/basic_ios.h
tweetmeister.o: /usr/include/c++/4.9/bits/locale_facets.h
tweetmeister.o: /usr/include/c++/4.9/cwctype /usr/include/wctype.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/ctype_base.h
tweetmeister.o: /usr/include/c++/4.9/bits/streambuf_iterator.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/ctype_inline.h
tweetmeister.o: /usr/include/c++/4.9/bits/locale_facets.tcc
tweetmeister.o: /usr/include/c++/4.9/bits/basic_ios.tcc
tweetmeister.o: /usr/include/c++/4.9/bits/ostream.tcc
tweetmeister.o: /usr/include/c++/4.9/istream
tweetmeister.o: /usr/include/c++/4.9/bits/istream.tcc
tweetmeister.o: /usr/include/c++/4.9/sstream
tweetmeister.o: /usr/include/c++/4.9/bits/sstream.tcc
tweetmeister.o: /usr/include/c++/4.9/fstream
tweetmeister.o: /usr/include/c++/4.9/bits/codecvt.h
tweetmeister.o: /usr/include/c++/4.9/cstdio
tweetmeister.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/basic_file.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++io.h
tweetmeister.o: /usr/include/c++/4.9/bits/fstream.tcc tweetApp.h tcpApp.h
tweetmeister.o: /usr/include/c++/4.9/memory
tweetmeister.o: /usr/include/c++/4.9/bits/stl_construct.h
tweetmeister.o: /usr/include/c++/4.9/ext/alloc_traits.h
tweetmeister.o: /usr/include/c++/4.9/bits/stl_uninitialized.h
tweetmeister.o: /usr/include/c++/4.9/bits/stl_tempbuf.h
tweetmeister.o: /usr/include/c++/4.9/bits/stl_raw_storage_iter.h
tweetmeister.o: /usr/include/c++/4.9/backward/auto_ptr.h
tweetmeister.o: /usr/include/c++/4.9/vector
tweetmeister.o: /usr/include/c++/4.9/bits/stl_vector.h
tweetmeister.o: /usr/include/c++/4.9/bits/stl_bvector.h
tweetmeister.o: /usr/include/c++/4.9/bits/vector.tcc /usr/include/unistd.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/posix_opt.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/environments.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/confname.h
tweetmeister.o: /usr/include/getopt.h /usr/include/c++/4.9/random
tweetmeister.o: /usr/include/c++/4.9/bits/c++0x_warning.h
tcpApp.o: tcpApp.h /usr/include/c++/4.9/memory
tcpApp.o: /usr/include/c++/4.9/bits/stl_algobase.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++config.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/os_defines.h
tcpApp.o: /usr/include/features.h /usr/include/stdc-predef.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/sys/cdefs.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/wordsize.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/gnu/stubs.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/gnu/stubs-hard.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/cpu_defines.h
tcpApp.o: /usr/include/c++/4.9/bits/functexcept.h
tcpApp.o: /usr/include/c++/4.9/bits/exception_defines.h
tcpApp.o: /usr/include/c++/4.9/bits/cpp_type_traits.h
tcpApp.o: /usr/include/c++/4.9/ext/type_traits.h
tcpApp.o: /usr/include/c++/4.9/ext/numeric_traits.h
tcpApp.o: /usr/include/c++/4.9/bits/stl_pair.h
tcpApp.o: /usr/include/c++/4.9/bits/move.h
tcpApp.o: /usr/include/c++/4.9/bits/concept_check.h
tcpApp.o: /usr/include/c++/4.9/bits/stl_iterator_base_types.h
tcpApp.o: /usr/include/c++/4.9/bits/stl_iterator_base_funcs.h
tcpApp.o: /usr/include/c++/4.9/debug/debug.h
tcpApp.o: /usr/include/c++/4.9/bits/stl_iterator.h
tcpApp.o: /usr/include/c++/4.9/bits/ptr_traits.h
tcpApp.o: /usr/include/c++/4.9/bits/predefined_ops.h
tcpApp.o: /usr/include/c++/4.9/bits/allocator.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++allocator.h
tcpApp.o: /usr/include/c++/4.9/ext/new_allocator.h /usr/include/c++/4.9/new
tcpApp.o: /usr/include/c++/4.9/exception
tcpApp.o: /usr/include/c++/4.9/bits/atomic_lockfree_defines.h
tcpApp.o: /usr/include/c++/4.9/bits/memoryfwd.h
tcpApp.o: /usr/include/c++/4.9/bits/stl_construct.h
tcpApp.o: /usr/include/c++/4.9/ext/alloc_traits.h
tcpApp.o: /usr/include/c++/4.9/bits/stl_uninitialized.h
tcpApp.o: /usr/include/c++/4.9/bits/stl_tempbuf.h
tcpApp.o: /usr/include/c++/4.9/bits/stl_raw_storage_iter.h
tcpApp.o: /usr/include/c++/4.9/backward/auto_ptr.h
tcpApp.o: /usr/include/c++/4.9/vector /usr/include/c++/4.9/bits/stl_vector.h
tcpApp.o: /usr/include/c++/4.9/bits/stl_bvector.h
tcpApp.o: /usr/include/c++/4.9/bits/range_access.h
tcpApp.o: /usr/include/c++/4.9/bits/vector.tcc /usr/include/unistd.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/posix_opt.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/environments.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/types.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/typesizes.h
tcpApp.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stddef.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/confname.h
tcpApp.o: /usr/include/getopt.h /usr/include/stdlib.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/waitflags.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/waitstatus.h
tcpApp.o: /usr/include/endian.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/endian.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/byteswap.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/byteswap-16.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/sys/types.h /usr/include/time.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/sys/select.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/select.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/sigset.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/time.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/sys/sysmacros.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/pthreadtypes.h
tcpApp.o: /usr/include/alloca.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/stdlib-float.h
tcpApp.o: /usr/include/string.h /usr/include/xlocale.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/sys/socket.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/sys/uio.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/uio.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/socket.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/socket_type.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/sockaddr.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/asm/socket.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/asm/sockios.h
tcpApp.o: /usr/include/netinet/in.h
tcpApp.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stdint.h
tcpApp.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stdint-gcc.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/in.h /usr/include/poll.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/sys/poll.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/poll.h basics.h
tcpApp.o: /usr/include/c++/4.9/iostream /usr/include/c++/4.9/ostream
tcpApp.o: /usr/include/c++/4.9/ios /usr/include/c++/4.9/iosfwd
tcpApp.o: /usr/include/c++/4.9/bits/stringfwd.h
tcpApp.o: /usr/include/c++/4.9/bits/postypes.h /usr/include/c++/4.9/cwchar
tcpApp.o: /usr/include/wchar.h /usr/include/stdio.h
tcpApp.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stdarg.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/wchar.h
tcpApp.o: /usr/include/c++/4.9/bits/char_traits.h
tcpApp.o: /usr/include/c++/4.9/bits/localefwd.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++locale.h
tcpApp.o: /usr/include/c++/4.9/clocale /usr/include/locale.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/locale.h
tcpApp.o: /usr/include/c++/4.9/cctype /usr/include/ctype.h
tcpApp.o: /usr/include/c++/4.9/bits/ios_base.h
tcpApp.o: /usr/include/c++/4.9/ext/atomicity.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/gthr.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/gthr-default.h
tcpApp.o: /usr/include/pthread.h /usr/include/sched.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/sched.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/setjmp.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/atomic_word.h
tcpApp.o: /usr/include/c++/4.9/bits/locale_classes.h
tcpApp.o: /usr/include/c++/4.9/string
tcpApp.o: /usr/include/c++/4.9/bits/ostream_insert.h
tcpApp.o: /usr/include/c++/4.9/bits/cxxabi_forced.h
tcpApp.o: /usr/include/c++/4.9/bits/stl_function.h
tcpApp.o: /usr/include/c++/4.9/backward/binders.h
tcpApp.o: /usr/include/c++/4.9/bits/basic_string.h
tcpApp.o: /usr/include/c++/4.9/bits/basic_string.tcc
tcpApp.o: /usr/include/c++/4.9/bits/locale_classes.tcc
tcpApp.o: /usr/include/c++/4.9/streambuf
tcpApp.o: /usr/include/c++/4.9/bits/streambuf.tcc
tcpApp.o: /usr/include/c++/4.9/bits/basic_ios.h
tcpApp.o: /usr/include/c++/4.9/bits/locale_facets.h
tcpApp.o: /usr/include/c++/4.9/cwctype /usr/include/wctype.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/ctype_base.h
tcpApp.o: /usr/include/c++/4.9/bits/streambuf_iterator.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/ctype_inline.h
tcpApp.o: /usr/include/c++/4.9/bits/locale_facets.tcc
tcpApp.o: /usr/include/c++/4.9/bits/basic_ios.tcc
tcpApp.o: /usr/include/c++/4.9/bits/ostream.tcc /usr/include/c++/4.9/istream
tcpApp.o: /usr/include/c++/4.9/bits/istream.tcc /usr/include/c++/4.9/sstream
tcpApp.o: /usr/include/c++/4.9/bits/sstream.tcc /usr/include/c++/4.9/fstream
tcpApp.o: /usr/include/c++/4.9/bits/codecvt.h /usr/include/c++/4.9/cstdio
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/basic_file.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++io.h
tcpApp.o: /usr/include/c++/4.9/bits/fstream.tcc
tweetApp.o: tweetApp.h tcpApp.h /usr/include/c++/4.9/memory
tweetApp.o: /usr/include/c++/4.9/bits/stl_algobase.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++config.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/os_defines.h
tweetApp.o: /usr/include/features.h /usr/include/stdc-predef.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/sys/cdefs.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/bits/wordsize.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/gnu/stubs.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/gnu/stubs-hard.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/cpu_defines.h
tweetApp.o: /usr/include/c++/4.9/bits/functexcept.h
tweetApp.o: /usr/include/c++/4.9/bits/exception_defines.h
tweetApp.o: /usr/include/c++/4.9/bits/cpp_type_traits.h
tweetApp.o: /usr/include/c++/4.9/ext/type_traits.h
tweetApp.o: /usr/include/c++/4.9/ext/numeric_traits.h
tweetApp.o: /usr/include/c++/4.9/bits/stl_pair.h
tweetApp.o: /usr/include/c++/4.9/bits/move.h
tweetApp.o: /usr/include/c++/4.9/bits/concept_check.h
tweetApp.o: /usr/include/c++/4.9/bits/stl_iterator_base_types.h
tweetApp.o: /usr/include/c++/4.9/bits/stl_iterator_base_funcs.h
tweetApp.o: /usr/include/c++/4.9/debug/debug.h
tweetApp.o: /usr/include/c++/4.9/bits/stl_iterator.h
tweetApp.o: /usr/include/c++/4.9/bits/ptr_traits.h
tweetApp.o: /usr/include/c++/4.9/bits/predefined_ops.h
tweetApp.o: /usr/include/c++/4.9/bits/allocator.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++allocator.h
tweetApp.o: /usr/include/c++/4.9/ext/new_allocator.h /usr/include/c++/4.9/new
tweetApp.o: /usr/include/c++/4.9/exception
tweetApp.o: /usr/include/c++/4.9/bits/atomic_lockfree_defines.h
tweetApp.o: /usr/include/c++/4.9/bits/memoryfwd.h
tweetApp.o: /usr/include/c++/4.9/bits/stl_construct.h
tweetApp.o: /usr/include/c++/4.9/ext/alloc_traits.h
tweetApp.o: /usr/include/c++/4.9/bits/stl_uninitialized.h
tweetApp.o: /usr/include/c++/4.9/bits/stl_tempbuf.h
tweetApp.o: /usr/include/c++/4.9/bits/stl_raw_storage_iter.h
tweetApp.o: /usr/include/c++/4.9/backward/auto_ptr.h
tweetApp.o: /usr/include/c++/4.9/vector
tweetApp.o: /usr/include/c++/4.9/bits/stl_vector.h
tweetApp.o: /usr/include/c++/4.9/bits/stl_bvector.h
tweetApp.o: /usr/include/c++/4.9/bits/range_access.h
tweetApp.o: /usr/include/c++/4.9/bits/vector.tcc /usr/include/unistd.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/bits/posix_opt.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/bits/environments.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/bits/types.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/bits/typesizes.h
tweetApp.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stddef.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/bits/confname.h
tweetApp.o: /usr/include/getopt.h /usr/include/c++/4.9/random
tweetApp.o: /usr/include/c++/4.9/bits/c++0x_warning.h basics.h
tweetApp.o: /usr/include/c++/4.9/iostream /usr/include/c++/4.9/ostream
tweetApp.o: /usr/include/c++/4.9/ios /usr/include/c++/4.9/iosfwd
tweetApp.o: /usr/include/c++/4.9/bits/stringfwd.h
tweetApp.o: /usr/include/c++/4.9/bits/postypes.h /usr/include/c++/4.9/cwchar
tweetApp.o: /usr/include/wchar.h /usr/include/stdio.h
tweetApp.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stdarg.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/bits/wchar.h
tweetApp.o: /usr/include/xlocale.h /usr/include/c++/4.9/bits/char_traits.h
tweetApp.o: /usr/include/c++/4.9/bits/localefwd.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++locale.h
tweetApp.o: /usr/include/c++/4.9/clocale /usr/include/locale.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/bits/locale.h
tweetApp.o: /usr/include/c++/4.9/cctype /usr/include/ctype.h
tweetApp.o: /usr/include/endian.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/bits/endian.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/bits/byteswap.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/bits/byteswap-16.h
tweetApp.o: /usr/include/c++/4.9/bits/ios_base.h
tweetApp.o: /usr/include/c++/4.9/ext/atomicity.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/gthr.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/gthr-default.h
tweetApp.o: /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/bits/sched.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/bits/pthreadtypes.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/bits/setjmp.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/atomic_word.h
tweetApp.o: /usr/include/c++/4.9/bits/locale_classes.h
tweetApp.o: /usr/include/c++/4.9/string
tweetApp.o: /usr/include/c++/4.9/bits/ostream_insert.h
tweetApp.o: /usr/include/c++/4.9/bits/cxxabi_forced.h
tweetApp.o: /usr/include/c++/4.9/bits/stl_function.h
tweetApp.o: /usr/include/c++/4.9/backward/binders.h
tweetApp.o: /usr/include/c++/4.9/bits/basic_string.h
tweetApp.o: /usr/include/c++/4.9/bits/basic_string.tcc
tweetApp.o: /usr/include/c++/4.9/bits/locale_classes.tcc
tweetApp.o: /usr/include/c++/4.9/streambuf
tweetApp.o: /usr/include/c++/4.9/bits/streambuf.tcc
tweetApp.o: /usr/include/c++/4.9/bits/basic_ios.h
tweetApp.o: /usr/include/c++/4.9/bits/locale_facets.h
tweetApp.o: /usr/include/c++/4.9/cwctype /usr/include/wctype.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/ctype_base.h
tweetApp.o: /usr/include/c++/4.9/bits/streambuf_iterator.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/ctype_inline.h
tweetApp.o: /usr/include/c++/4.9/bits/locale_facets.tcc
tweetApp.o: /usr/include/c++/4.9/bits/basic_ios.tcc
tweetApp.o: /usr/include/c++/4.9/bits/ostream.tcc
tweetApp.o: /usr/include/c++/4.9/istream
tweetApp.o: /usr/include/c++/4.9/bits/istream.tcc
tweetApp.o: /usr/include/c++/4.9/sstream
tweetApp.o: /usr/include/c++/4.9/bits/sstream.tcc
tweetApp.o: /usr/include/c++/4.9/fstream /usr/include/c++/4.9/bits/codecvt.h
tweetApp.o: /usr/include/c++/4.9/cstdio
tweetApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/basic_file.h
tweetApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++io.h
tweetApp.o: /usr/include/c++/4.9/bits/fstream.tcc /usr/include/string.h
