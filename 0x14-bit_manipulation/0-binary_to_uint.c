#include "main.h"

/**
 * _strlen - calculates the length of a given string
 * @s: pointer to the
 *
 * Return: length of the string
 */
unsigned long int _strlen(const char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] != '0' && s[j] != '1')
			return (0);
		j++;
	}
	return (j);
}

/**
 * _pow - calculates the value of x raised to the power of y
 * @x: the base number
 * @y: the exponent
 * Return: the value of x raised to the power of y
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	if (y < 0)

		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	else
		return (x * _pow(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned long int l, index, i;

	if (!b)
		return (0);

	l = _strlen(b);
	if (l == 0)
		return (0);

	index = l - 1;

	for (i = 0; i < l; i++)
	{
		if (b[i] == '1')
			sum += _pow(2, index);
		index--;
	}

	return (sum);
}
