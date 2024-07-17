#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>
#include <stdlib.h>



int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int searching(int *array, int value, int low, int high);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary_recursive(int *array, int value, size_t low, size_t high);
int exponential_search(int *array, size_t size, int value);
int binary_search_1(int *array, int start, int end, int value);





#endif /* SEARCH_ALGOS */
