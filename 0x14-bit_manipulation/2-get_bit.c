#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number.
 * @index: index of the bit you want to get starting from 0.
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (n == 0 && index == 0)
		return (0);

	n = n >> (index);

	if (n == 0)
		return (-1);
	return (n & 1);
}
