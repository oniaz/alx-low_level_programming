#include "main.h"

/**
 * print_number - cprints an integer.
 * @n: the integer to be printed
 */
void print_number(int n)
{
	unsigned int digit = 0, num = n, num2 = 0;

	if (n < 0)
	{
		_putchar('-');
		num *= -1;
	}

	if (num == 0)
	{
		_putchar(0 + '0');
	}

	else
	{
		while (num > 0)
		{
			digit = num % 10;
			num2 *= 10;
			num2 += digit;
			num = num / 10;
		}

		while (num2 > 0)
		{
			digit = num2 % 10;
			_putchar(digit + '0');
			num2 = num2 / 10;
		}
	}
}
