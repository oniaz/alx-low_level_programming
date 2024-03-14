#ifndef SA
#define SA

#include <unistd.h>
#include <stdio.h>

/* Search Functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* misc */
void print_array(int *array, size_t start, size_t end);

#endif
