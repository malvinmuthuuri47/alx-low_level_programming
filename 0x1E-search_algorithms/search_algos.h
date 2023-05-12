#ifndef SEARCH_ALGOS_H

#define SEARCH_ALGOS_H

#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);
int jump_search(int *array, size_t size, int value);
size_t min(size_t a, size_t b);
int interpolation_search(int *array, size_t size, int value);
int ppf(int *array, size_t low, size_t high, int value);

#endif

