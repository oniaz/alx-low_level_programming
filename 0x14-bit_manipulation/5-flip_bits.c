#include "main.h"

/**
 * flip_bits - calculates the number of bits needed to flip from one number
 * to another.
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits needed to flip from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits = 8 * sizeof(unsigned long int);
	int counter = 0, i = 0;

	for (i = 0; i < bits; i++)
	{
		if ((n & 1) != (m & 1))
			counter++;
		m >>= 1;
		n >>= 1;
	}

	return (counter);
}
