#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number.
 * @index: index of the bit you want to get starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int k = 1;

	if (index > 8 * sizeof(unsigned long int))
		return (-1);

	k <<= index;
	*n = (*n | k);

	return (1);
}
