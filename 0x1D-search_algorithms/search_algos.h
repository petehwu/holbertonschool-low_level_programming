#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_helper(int *array, size_t low, size_t up, int value);
int jump_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
#endif /*_SEARCH_ALGOS_H_*/
