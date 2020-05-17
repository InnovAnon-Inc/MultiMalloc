AM_CPPFLAGS = -D__STDC_INT64__

lib_LTLIBRARIES =
include_HEADERS =
bin_PROGRAMS    =

lib_LTLIBRARIES += libmmalloc.la
libmmalloc_la_CPPFLAGS = $(GLITTER_CFLAGS)
libmmalloc_la_LIBADD   = $(GLITTER_LIBS)
include_HEADERS += mmalloc.h

#bin_PROGRAMS += mmalloc-test
#mmalloc_test_LDADD = libmmalloc.la -lsum

