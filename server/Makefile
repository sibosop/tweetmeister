include $(TWEET_ROOT)/Makefile.common

INCLUDES=basics.h
TWEET_PROG=tweetmeister
TWEET_SRCS=$(TWEET_PROG).cpp tcpApp.cpp tweetTask.cpp wavMaker.cpp task.cpp
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
tweetmeister.o: /usr/include/c++/4.9/bits/fstream.tcc tweetTask.h tcpApp.h
tweetmeister.o: /usr/include/c++/4.9/vector
tweetmeister.o: /usr/include/c++/4.9/bits/stl_construct.h
tweetmeister.o: /usr/include/c++/4.9/ext/alloc_traits.h
tweetmeister.o: /usr/include/c++/4.9/bits/stl_uninitialized.h
tweetmeister.o: /usr/include/c++/4.9/bits/stl_vector.h
tweetmeister.o: /usr/include/c++/4.9/bits/stl_bvector.h
tweetmeister.o: /usr/include/c++/4.9/bits/vector.tcc /usr/include/unistd.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/posix_opt.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/environments.h
tweetmeister.o: /usr/include/arm-linux-gnueabihf/bits/confname.h
tweetmeister.o: /usr/include/getopt.h singleton.h task.h
tweetmeister.o: /usr/include/c++/4.9/memory
tweetmeister.o: /usr/include/c++/4.9/bits/stl_tempbuf.h
tweetmeister.o: /usr/include/c++/4.9/bits/stl_raw_storage_iter.h
tweetmeister.o: /usr/include/c++/4.9/backward/auto_ptr.h
tcpApp.o: tcpApp.h /usr/include/c++/4.9/vector
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
tcpApp.o: /usr/include/c++/4.9/bits/stl_vector.h
tcpApp.o: /usr/include/c++/4.9/bits/stl_bvector.h
tcpApp.o: /usr/include/c++/4.9/bits/range_access.h
tcpApp.o: /usr/include/c++/4.9/bits/vector.tcc /usr/include/unistd.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/posix_opt.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/environments.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/types.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/typesizes.h
tcpApp.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stddef.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/confname.h
tcpApp.o: /usr/include/getopt.h singleton.h basics.h
tcpApp.o: /usr/include/c++/4.9/iostream /usr/include/c++/4.9/ostream
tcpApp.o: /usr/include/c++/4.9/ios /usr/include/c++/4.9/iosfwd
tcpApp.o: /usr/include/c++/4.9/bits/stringfwd.h
tcpApp.o: /usr/include/c++/4.9/bits/postypes.h /usr/include/c++/4.9/cwchar
tcpApp.o: /usr/include/wchar.h /usr/include/stdio.h
tcpApp.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stdarg.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/wchar.h
tcpApp.o: /usr/include/xlocale.h /usr/include/c++/4.9/bits/char_traits.h
tcpApp.o: /usr/include/c++/4.9/bits/localefwd.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++locale.h
tcpApp.o: /usr/include/c++/4.9/clocale /usr/include/locale.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/locale.h
tcpApp.o: /usr/include/c++/4.9/cctype /usr/include/ctype.h
tcpApp.o: /usr/include/endian.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/endian.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/byteswap.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/byteswap-16.h
tcpApp.o: /usr/include/c++/4.9/bits/ios_base.h
tcpApp.o: /usr/include/c++/4.9/ext/atomicity.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/gthr.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/gthr-default.h
tcpApp.o: /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/sched.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/pthreadtypes.h
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
tcpApp.o: /usr/include/c++/4.9/bits/fstream.tcc task.h
tcpApp.o: /usr/include/c++/4.9/memory /usr/include/c++/4.9/bits/stl_tempbuf.h
tcpApp.o: /usr/include/c++/4.9/bits/stl_raw_storage_iter.h
tcpApp.o: /usr/include/c++/4.9/backward/auto_ptr.h /usr/include/stdlib.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/waitflags.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/waitstatus.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/sys/types.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/sys/select.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/select.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/sigset.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/time.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/sys/sysmacros.h
tcpApp.o: /usr/include/alloca.h
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/stdlib-float.h
tcpApp.o: /usr/include/string.h /usr/include/arm-linux-gnueabihf/sys/socket.h
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
tcpApp.o: /usr/include/arm-linux-gnueabihf/bits/poll.h
tweetTask.o: tweetTask.h tcpApp.h /usr/include/c++/4.9/vector
tweetTask.o: /usr/include/c++/4.9/bits/stl_algobase.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++config.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/os_defines.h
tweetTask.o: /usr/include/features.h /usr/include/stdc-predef.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/sys/cdefs.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/bits/wordsize.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/gnu/stubs.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/gnu/stubs-hard.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/cpu_defines.h
tweetTask.o: /usr/include/c++/4.9/bits/functexcept.h
tweetTask.o: /usr/include/c++/4.9/bits/exception_defines.h
tweetTask.o: /usr/include/c++/4.9/bits/cpp_type_traits.h
tweetTask.o: /usr/include/c++/4.9/ext/type_traits.h
tweetTask.o: /usr/include/c++/4.9/ext/numeric_traits.h
tweetTask.o: /usr/include/c++/4.9/bits/stl_pair.h
tweetTask.o: /usr/include/c++/4.9/bits/move.h
tweetTask.o: /usr/include/c++/4.9/bits/concept_check.h
tweetTask.o: /usr/include/c++/4.9/bits/stl_iterator_base_types.h
tweetTask.o: /usr/include/c++/4.9/bits/stl_iterator_base_funcs.h
tweetTask.o: /usr/include/c++/4.9/debug/debug.h
tweetTask.o: /usr/include/c++/4.9/bits/stl_iterator.h
tweetTask.o: /usr/include/c++/4.9/bits/ptr_traits.h
tweetTask.o: /usr/include/c++/4.9/bits/predefined_ops.h
tweetTask.o: /usr/include/c++/4.9/bits/allocator.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++allocator.h
tweetTask.o: /usr/include/c++/4.9/ext/new_allocator.h
tweetTask.o: /usr/include/c++/4.9/new /usr/include/c++/4.9/exception
tweetTask.o: /usr/include/c++/4.9/bits/atomic_lockfree_defines.h
tweetTask.o: /usr/include/c++/4.9/bits/memoryfwd.h
tweetTask.o: /usr/include/c++/4.9/bits/stl_construct.h
tweetTask.o: /usr/include/c++/4.9/ext/alloc_traits.h
tweetTask.o: /usr/include/c++/4.9/bits/stl_uninitialized.h
tweetTask.o: /usr/include/c++/4.9/bits/stl_vector.h
tweetTask.o: /usr/include/c++/4.9/bits/stl_bvector.h
tweetTask.o: /usr/include/c++/4.9/bits/range_access.h
tweetTask.o: /usr/include/c++/4.9/bits/vector.tcc /usr/include/unistd.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/bits/posix_opt.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/bits/environments.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/bits/types.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/bits/typesizes.h
tweetTask.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stddef.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/bits/confname.h
tweetTask.o: /usr/include/getopt.h singleton.h basics.h
tweetTask.o: /usr/include/c++/4.9/iostream /usr/include/c++/4.9/ostream
tweetTask.o: /usr/include/c++/4.9/ios /usr/include/c++/4.9/iosfwd
tweetTask.o: /usr/include/c++/4.9/bits/stringfwd.h
tweetTask.o: /usr/include/c++/4.9/bits/postypes.h /usr/include/c++/4.9/cwchar
tweetTask.o: /usr/include/wchar.h /usr/include/stdio.h
tweetTask.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stdarg.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/bits/wchar.h
tweetTask.o: /usr/include/xlocale.h /usr/include/c++/4.9/bits/char_traits.h
tweetTask.o: /usr/include/c++/4.9/bits/localefwd.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++locale.h
tweetTask.o: /usr/include/c++/4.9/clocale /usr/include/locale.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/bits/locale.h
tweetTask.o: /usr/include/c++/4.9/cctype /usr/include/ctype.h
tweetTask.o: /usr/include/endian.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/bits/endian.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/bits/byteswap.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/bits/byteswap-16.h
tweetTask.o: /usr/include/c++/4.9/bits/ios_base.h
tweetTask.o: /usr/include/c++/4.9/ext/atomicity.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/gthr.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/gthr-default.h
tweetTask.o: /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/bits/sched.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/bits/pthreadtypes.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/bits/setjmp.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/atomic_word.h
tweetTask.o: /usr/include/c++/4.9/bits/locale_classes.h
tweetTask.o: /usr/include/c++/4.9/string
tweetTask.o: /usr/include/c++/4.9/bits/ostream_insert.h
tweetTask.o: /usr/include/c++/4.9/bits/cxxabi_forced.h
tweetTask.o: /usr/include/c++/4.9/bits/stl_function.h
tweetTask.o: /usr/include/c++/4.9/backward/binders.h
tweetTask.o: /usr/include/c++/4.9/bits/basic_string.h
tweetTask.o: /usr/include/c++/4.9/bits/basic_string.tcc
tweetTask.o: /usr/include/c++/4.9/bits/locale_classes.tcc
tweetTask.o: /usr/include/c++/4.9/streambuf
tweetTask.o: /usr/include/c++/4.9/bits/streambuf.tcc
tweetTask.o: /usr/include/c++/4.9/bits/basic_ios.h
tweetTask.o: /usr/include/c++/4.9/bits/locale_facets.h
tweetTask.o: /usr/include/c++/4.9/cwctype /usr/include/wctype.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/ctype_base.h
tweetTask.o: /usr/include/c++/4.9/bits/streambuf_iterator.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/ctype_inline.h
tweetTask.o: /usr/include/c++/4.9/bits/locale_facets.tcc
tweetTask.o: /usr/include/c++/4.9/bits/basic_ios.tcc
tweetTask.o: /usr/include/c++/4.9/bits/ostream.tcc
tweetTask.o: /usr/include/c++/4.9/istream
tweetTask.o: /usr/include/c++/4.9/bits/istream.tcc
tweetTask.o: /usr/include/c++/4.9/sstream
tweetTask.o: /usr/include/c++/4.9/bits/sstream.tcc
tweetTask.o: /usr/include/c++/4.9/fstream /usr/include/c++/4.9/bits/codecvt.h
tweetTask.o: /usr/include/c++/4.9/cstdio
tweetTask.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/basic_file.h
tweetTask.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++io.h
tweetTask.o: /usr/include/c++/4.9/bits/fstream.tcc task.h
tweetTask.o: /usr/include/c++/4.9/memory
tweetTask.o: /usr/include/c++/4.9/bits/stl_tempbuf.h
tweetTask.o: /usr/include/c++/4.9/bits/stl_raw_storage_iter.h
tweetTask.o: /usr/include/c++/4.9/backward/auto_ptr.h /usr/include/string.h
tweetTask.o: wavMaker.h /usr/include/c++/4.9/random
tweetTask.o: /usr/include/c++/4.9/bits/c++0x_warning.h
wavMaker.o: wavMaker.h /usr/include/c++/4.9/string
wavMaker.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++config.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/os_defines.h
wavMaker.o: /usr/include/features.h /usr/include/stdc-predef.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/sys/cdefs.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/bits/wordsize.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/gnu/stubs.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/gnu/stubs-hard.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/cpu_defines.h
wavMaker.o: /usr/include/c++/4.9/bits/stringfwd.h
wavMaker.o: /usr/include/c++/4.9/bits/memoryfwd.h
wavMaker.o: /usr/include/c++/4.9/bits/char_traits.h
wavMaker.o: /usr/include/c++/4.9/bits/stl_algobase.h
wavMaker.o: /usr/include/c++/4.9/bits/functexcept.h
wavMaker.o: /usr/include/c++/4.9/bits/exception_defines.h
wavMaker.o: /usr/include/c++/4.9/bits/cpp_type_traits.h
wavMaker.o: /usr/include/c++/4.9/ext/type_traits.h
wavMaker.o: /usr/include/c++/4.9/ext/numeric_traits.h
wavMaker.o: /usr/include/c++/4.9/bits/stl_pair.h
wavMaker.o: /usr/include/c++/4.9/bits/move.h
wavMaker.o: /usr/include/c++/4.9/bits/concept_check.h
wavMaker.o: /usr/include/c++/4.9/bits/stl_iterator_base_types.h
wavMaker.o: /usr/include/c++/4.9/bits/stl_iterator_base_funcs.h
wavMaker.o: /usr/include/c++/4.9/debug/debug.h
wavMaker.o: /usr/include/c++/4.9/bits/stl_iterator.h
wavMaker.o: /usr/include/c++/4.9/bits/ptr_traits.h
wavMaker.o: /usr/include/c++/4.9/bits/predefined_ops.h
wavMaker.o: /usr/include/c++/4.9/bits/postypes.h /usr/include/c++/4.9/cwchar
wavMaker.o: /usr/include/wchar.h /usr/include/stdio.h
wavMaker.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stdarg.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/bits/wchar.h
wavMaker.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stddef.h
wavMaker.o: /usr/include/xlocale.h /usr/include/c++/4.9/bits/allocator.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++allocator.h
wavMaker.o: /usr/include/c++/4.9/ext/new_allocator.h /usr/include/c++/4.9/new
wavMaker.o: /usr/include/c++/4.9/exception
wavMaker.o: /usr/include/c++/4.9/bits/atomic_lockfree_defines.h
wavMaker.o: /usr/include/c++/4.9/bits/localefwd.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++locale.h
wavMaker.o: /usr/include/c++/4.9/clocale /usr/include/locale.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/bits/locale.h
wavMaker.o: /usr/include/c++/4.9/iosfwd /usr/include/c++/4.9/cctype
wavMaker.o: /usr/include/ctype.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/bits/types.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/bits/typesizes.h
wavMaker.o: /usr/include/endian.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/bits/endian.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/bits/byteswap.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/bits/byteswap-16.h
wavMaker.o: /usr/include/c++/4.9/bits/ostream_insert.h
wavMaker.o: /usr/include/c++/4.9/bits/cxxabi_forced.h
wavMaker.o: /usr/include/c++/4.9/bits/stl_function.h
wavMaker.o: /usr/include/c++/4.9/backward/binders.h
wavMaker.o: /usr/include/c++/4.9/bits/range_access.h
wavMaker.o: /usr/include/c++/4.9/bits/basic_string.h
wavMaker.o: /usr/include/c++/4.9/ext/atomicity.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/gthr.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/gthr-default.h
wavMaker.o: /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/bits/sched.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/bits/pthreadtypes.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/bits/setjmp.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/atomic_word.h
wavMaker.o: /usr/include/c++/4.9/bits/basic_string.tcc
wavMaker.o: /usr/include/c++/4.9/random
wavMaker.o: /usr/include/c++/4.9/bits/c++0x_warning.h singleton.h basics.h
wavMaker.o: /usr/include/c++/4.9/iostream /usr/include/c++/4.9/ostream
wavMaker.o: /usr/include/c++/4.9/ios /usr/include/c++/4.9/bits/ios_base.h
wavMaker.o: /usr/include/c++/4.9/bits/locale_classes.h
wavMaker.o: /usr/include/c++/4.9/bits/locale_classes.tcc
wavMaker.o: /usr/include/c++/4.9/streambuf
wavMaker.o: /usr/include/c++/4.9/bits/streambuf.tcc
wavMaker.o: /usr/include/c++/4.9/bits/basic_ios.h
wavMaker.o: /usr/include/c++/4.9/bits/locale_facets.h
wavMaker.o: /usr/include/c++/4.9/cwctype /usr/include/wctype.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/ctype_base.h
wavMaker.o: /usr/include/c++/4.9/bits/streambuf_iterator.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/ctype_inline.h
wavMaker.o: /usr/include/c++/4.9/bits/locale_facets.tcc
wavMaker.o: /usr/include/c++/4.9/bits/basic_ios.tcc
wavMaker.o: /usr/include/c++/4.9/bits/ostream.tcc
wavMaker.o: /usr/include/c++/4.9/istream
wavMaker.o: /usr/include/c++/4.9/bits/istream.tcc
wavMaker.o: /usr/include/c++/4.9/sstream
wavMaker.o: /usr/include/c++/4.9/bits/sstream.tcc
wavMaker.o: /usr/include/c++/4.9/fstream /usr/include/c++/4.9/bits/codecvt.h
wavMaker.o: /usr/include/c++/4.9/cstdio
wavMaker.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/basic_file.h
wavMaker.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++io.h
wavMaker.o: /usr/include/c++/4.9/bits/fstream.tcc
task.o: task.h /usr/include/c++/4.9/memory
task.o: /usr/include/c++/4.9/bits/stl_algobase.h
task.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++config.h
task.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/os_defines.h
task.o: /usr/include/features.h /usr/include/stdc-predef.h
task.o: /usr/include/arm-linux-gnueabihf/sys/cdefs.h
task.o: /usr/include/arm-linux-gnueabihf/bits/wordsize.h
task.o: /usr/include/arm-linux-gnueabihf/gnu/stubs.h
task.o: /usr/include/arm-linux-gnueabihf/gnu/stubs-hard.h
task.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/cpu_defines.h
task.o: /usr/include/c++/4.9/bits/functexcept.h
task.o: /usr/include/c++/4.9/bits/exception_defines.h
task.o: /usr/include/c++/4.9/bits/cpp_type_traits.h
task.o: /usr/include/c++/4.9/ext/type_traits.h
task.o: /usr/include/c++/4.9/ext/numeric_traits.h
task.o: /usr/include/c++/4.9/bits/stl_pair.h /usr/include/c++/4.9/bits/move.h
task.o: /usr/include/c++/4.9/bits/concept_check.h
task.o: /usr/include/c++/4.9/bits/stl_iterator_base_types.h
task.o: /usr/include/c++/4.9/bits/stl_iterator_base_funcs.h
task.o: /usr/include/c++/4.9/debug/debug.h
task.o: /usr/include/c++/4.9/bits/stl_iterator.h
task.o: /usr/include/c++/4.9/bits/ptr_traits.h
task.o: /usr/include/c++/4.9/bits/predefined_ops.h
task.o: /usr/include/c++/4.9/bits/allocator.h
task.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++allocator.h
task.o: /usr/include/c++/4.9/ext/new_allocator.h /usr/include/c++/4.9/new
task.o: /usr/include/c++/4.9/exception
task.o: /usr/include/c++/4.9/bits/atomic_lockfree_defines.h
task.o: /usr/include/c++/4.9/bits/memoryfwd.h
task.o: /usr/include/c++/4.9/bits/stl_construct.h
task.o: /usr/include/c++/4.9/ext/alloc_traits.h
task.o: /usr/include/c++/4.9/bits/stl_uninitialized.h
task.o: /usr/include/c++/4.9/bits/stl_tempbuf.h
task.o: /usr/include/c++/4.9/bits/stl_raw_storage_iter.h
task.o: /usr/include/c++/4.9/backward/auto_ptr.h /usr/include/c++/4.9/sstream
task.o: /usr/include/c++/4.9/istream /usr/include/c++/4.9/ios
task.o: /usr/include/c++/4.9/iosfwd /usr/include/c++/4.9/bits/stringfwd.h
task.o: /usr/include/c++/4.9/bits/postypes.h /usr/include/c++/4.9/cwchar
task.o: /usr/include/wchar.h /usr/include/stdio.h
task.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stdarg.h
task.o: /usr/include/arm-linux-gnueabihf/bits/wchar.h
task.o: /usr/lib/gcc/arm-linux-gnueabihf/4.9/include/stddef.h
task.o: /usr/include/xlocale.h /usr/include/c++/4.9/bits/char_traits.h
task.o: /usr/include/c++/4.9/bits/localefwd.h
task.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/c++locale.h
task.o: /usr/include/c++/4.9/clocale /usr/include/locale.h
task.o: /usr/include/arm-linux-gnueabihf/bits/locale.h
task.o: /usr/include/c++/4.9/cctype /usr/include/ctype.h
task.o: /usr/include/arm-linux-gnueabihf/bits/types.h
task.o: /usr/include/arm-linux-gnueabihf/bits/typesizes.h
task.o: /usr/include/endian.h /usr/include/arm-linux-gnueabihf/bits/endian.h
task.o: /usr/include/arm-linux-gnueabihf/bits/byteswap.h
task.o: /usr/include/arm-linux-gnueabihf/bits/byteswap-16.h
task.o: /usr/include/c++/4.9/bits/ios_base.h
task.o: /usr/include/c++/4.9/ext/atomicity.h
task.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/gthr.h
task.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/gthr-default.h
task.o: /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h
task.o: /usr/include/arm-linux-gnueabihf/bits/sched.h
task.o: /usr/include/arm-linux-gnueabihf/bits/pthreadtypes.h
task.o: /usr/include/arm-linux-gnueabihf/bits/setjmp.h
task.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/atomic_word.h
task.o: /usr/include/c++/4.9/bits/locale_classes.h
task.o: /usr/include/c++/4.9/string
task.o: /usr/include/c++/4.9/bits/ostream_insert.h
task.o: /usr/include/c++/4.9/bits/cxxabi_forced.h
task.o: /usr/include/c++/4.9/bits/stl_function.h
task.o: /usr/include/c++/4.9/backward/binders.h
task.o: /usr/include/c++/4.9/bits/range_access.h
task.o: /usr/include/c++/4.9/bits/basic_string.h
task.o: /usr/include/c++/4.9/bits/basic_string.tcc
task.o: /usr/include/c++/4.9/bits/locale_classes.tcc
task.o: /usr/include/c++/4.9/streambuf
task.o: /usr/include/c++/4.9/bits/streambuf.tcc
task.o: /usr/include/c++/4.9/bits/basic_ios.h
task.o: /usr/include/c++/4.9/bits/locale_facets.h
task.o: /usr/include/c++/4.9/cwctype /usr/include/wctype.h
task.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/ctype_base.h
task.o: /usr/include/c++/4.9/bits/streambuf_iterator.h
task.o: /usr/include/arm-linux-gnueabihf/c++/4.9/bits/ctype_inline.h
task.o: /usr/include/c++/4.9/bits/locale_facets.tcc
task.o: /usr/include/c++/4.9/bits/basic_ios.tcc /usr/include/c++/4.9/ostream
task.o: /usr/include/c++/4.9/bits/ostream.tcc
task.o: /usr/include/c++/4.9/bits/istream.tcc
task.o: /usr/include/c++/4.9/bits/sstream.tcc /usr/include/unistd.h
task.o: /usr/include/arm-linux-gnueabihf/bits/posix_opt.h
task.o: /usr/include/arm-linux-gnueabihf/bits/environments.h
task.o: /usr/include/arm-linux-gnueabihf/bits/confname.h
task.o: /usr/include/getopt.h
