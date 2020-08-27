#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* INCLUDED LIBRARIES */
#include <stdio.h>

/* FUNCTION PROTOTYPES */
/* function to use linear search to find first index of matching value (0) */
int linear_search(int *array, size_t size, int value);
/* function to use binary search to find index of matching value (1) */
int binary_search(int *array, size_t size, int value);
/* function to use jump search to find index of matching value (100) */
int jump_search(int *array, size_t size, int value);
/* function to use interpolation search to find index of matching value (102) */
int interpolation_search(int *array, size_t size, int value);

#endif
