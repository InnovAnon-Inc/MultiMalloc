AM_CPPFLAGS = -D__STDC_INT64__

SUBDIRS = ../glitter
AM_CPPFLAGS += -I ../glitter/src
#AM_CPPFLAGS += -I ../ZePaSt/src

lib_LTLIBRARIES =
include_HEADERS =
bin_PROGRAMS    =

LIBMMALLOC_LIBADD =

lib_LTLIBRARIES += libmmalloc.la
libmmalloc_la_LIBADD = $(LIBMMALLOC_LIBADD)
include_HEADERS += mmalloc.h
#bin_PROGRAMS += mmalloc-test
#mmalloc_test_LDADD = libmmalloc.la -lsum
