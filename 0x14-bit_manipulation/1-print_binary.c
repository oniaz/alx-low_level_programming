#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number.
 */
void print_binary(unsigned long int n)
{
	int l;

	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}

	l = n & 1;
	n = n >> 1;
	print_binary(n);
	_putchar(l + '0');
}
