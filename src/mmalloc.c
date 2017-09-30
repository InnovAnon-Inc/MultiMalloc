#if HAVE_CONFIG_H
#include <config.h>
#endif

#define _POSIX_C_SOURCE 200112L
#define __STDC_VERSION__ 200112L

#define NDEBUG 1

#ifndef NDEBUG
#include <stdio.h>
#endif
#include <stdlib.h>

#include <sum.h>

#include <mmalloc.h>

__attribute__ ((leaf, nonnull (1), nothrow, warn_unused_result))
int multi_malloc (void const *restrict dests[],
	size_t sumsz, size_t n) {
	size_t i, sumsz;
	char const *restrict tmp;

	tmp = (char const *restrict) malloc (sumsz);
	error_check (tmp == NULL) return -1;

	for (i = sumsz = 0; i != n; sumsz += eszs[i], i++)
		dest[i] = (void const *restrict) (tmp + sumsz);

	return 0;
}

__attribute__ ((nonnull (1, 2), nothrow, warn_unused_result))
int ez_multi_malloc (void const *restrict dests[],
	size_t const eszs[], size_t n) {
	size_t sumsz = ezr_sum (eszs, n);
	return multi_malloc (dests, sumsz, n);
}
