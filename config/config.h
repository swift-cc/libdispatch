#define __linux__
#define __ANDROID__

#define HAVE_DECL_CLOCK_MONOTONIC 1
#define USE_POSIX_SEM 1

#ifdef __ANDROID__
#undef __APPLE__
#endif