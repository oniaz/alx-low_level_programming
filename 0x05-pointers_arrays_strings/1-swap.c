#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second intger
 */
void swap_int(int *a, int *b)
{
	int swapper = *a;

	*a = *b;
	*b = swapper;
}
