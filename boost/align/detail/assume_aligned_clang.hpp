/*
(c) 2015 Glen Joseph Fernandes
<glenjofe -at- gmail.com>

Distributed under the Boost Software
License, Version 1.0.
http://boost.org/LICENSE_1_0.txt
*/
#ifndef BOOST_ALIGN_DETAIL_ASSUME_ALIGNED_CLANG_HPP
#define BOOST_ALIGN_DETAIL_ASSUME_ALIGNED_CLANG_HPP

#if __has_builtin(__builtin_assume_aligned)
#define BOOST_ALIGN_ASSUME_ALIGNED(ptr, alignment) \
(ptr) = __builtin_assume_aligned((ptr), (alignment))
#else
#define BOOST_ALIGN_ASSUME_ALIGNED(ptr, alignment)
#endif

#endif
