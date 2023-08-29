#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the 2 diagonals of a square matrix
 * @a: pointer to the first element in the matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned long sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%lu, %lu\n", sum1, sum2);
}
