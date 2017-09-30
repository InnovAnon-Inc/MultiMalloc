#ifndef _MMALLOC_H_
#define _MMALLOC_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <sys/types.h>

#include <glitter.h>

int multi_malloc (void const *restrict dests[],
	size_t sumsz, size_t n)
__attribute__ ((leaf, nonnull (1), nothrow, warn_unused_result)) ;

int ez_multi_malloc (void const *restrict dests[],
	size_t const eszs[], size_t n)
__attribute__ ((nonnull (1, 2), nothrow, warn_unused_result)) ;

#ifdef __cplusplus
}
#endif

#endif /* _MMALLOC_H_ */