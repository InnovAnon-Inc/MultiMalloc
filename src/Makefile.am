lib_LTLIBRARIES =
include_HEADERS =
bin_PROGRAMS    =

lib_LTLIBRARIES += libmmalloc.la
libmmalloc_la_SOURCES = mmalloc.c
#libmmalloc_la_LIBADD = -lsum
include_HEADERS += mmalloc.h
#bin_PROGRAMS += mmalloc
#mmalloc_SOURCES = mmalloc-test.c
#mmalloc_LDADD = libmmalloc.la -lsum

AM_CPPFLAGS = -D__STDC_INT64__
AM_CPPFLAGS += -I $(srcdir)/../glitter/src
#AM_CPPFLAGS += -I $(srcdir)/../ZePaSt/src
