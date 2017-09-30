#ifndef _MMALLOC_H_
#define _MMALLOC_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <sys/types.h>

#include <glitter.h>

int mmalloc (void const *restrict dests[],
	size_t const eszs[], size_t sumsz, size_t n)
__attribute__ ((leaf, nonnull (1), nothrow, warn_unused_result)) ;

size_t sum_size_t (size_t const x[], size_t n)
__attribute__ ((leaf, nonnull (1), nothrow, pure, warn_unused_result)) ;

int ez_mmalloc (void const *restrict dests[],
	size_t const eszs[], size_t n)
__attribute__ ((nonnull (1, 2), nothrow, warn_unused_result)) ;

#ifdef __cplusplus
}
#endif

#endif /* _MMALLOC_H_ */