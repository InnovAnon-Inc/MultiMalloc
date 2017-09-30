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

#include <mmalloc.h>

__attribute__ ((leaf, nonnull (1, 2), nothrow, warn_unused_result))
int mmalloc (void const *restrict dests[],
	size_t const eszs[], size_t sumsz, size_t n) {
	size_t i, cumsum;
	char const *restrict tmp;

	tmp = (char const *restrict) malloc (sumsz);
	error_check (tmp == NULL) return -1;

	for (i = cumsum = 0; i != n; cumsum += eszs[i], i++)
		dests[i] = (void const *restrict) (tmp + cumsum);

	/*assert (sumsz == cumsum)*/
	return 0;
}

__attribute__ ((leaf, nonnull (1), nothrow, pure, warn_unused_result))
size_t sum_size_t (size_t const x[], size_t n) {
	size_t i, sum;
	for (i = sum = 0; i != n; i++)
		sum += x[i];
	return sum;
}

__attribute__ ((nonnull (1, 2), nothrow, warn_unused_result))
int ez_mmalloc (void const *restrict dests[],
	size_t const eszs[], size_t n) {
	size_t sumsz = sum_size_t (eszs, n);
	return mmalloc (dests, eszs, sumsz, n);
}
