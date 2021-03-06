#define CONFIG HAVE_UTIME
#define FUNC utime
#define SFUNC "utime"
#define FUNC_STR "\"%s\", %p"
#define FUNC_IMP file, times
#define ARG_CNT 2
#define ARG_USE "<file> <times>"

#define process_args() \
	s = argv[i++]; \
	const char *file = f_get_file(s); \
	\
	s = argv[i++]; \
	const struct utimbuf *times = NULL;

#include "test-skel-0.c"
