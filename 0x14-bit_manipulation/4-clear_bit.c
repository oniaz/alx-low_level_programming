#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number.
 * @index: index of the bit you want to get starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int k = 1;

	if (index > 8 * sizeof(unsigned long int))
		return (-1);

	k = ~(k << index);
	*n = (*n & k);

	return (1);
}
