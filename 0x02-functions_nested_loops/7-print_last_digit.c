#include "main.h"
/**
 * print_last_digit - return the last digit of a number
 * @num: int to get the lst digit of
 * Return: last digit of the number
*/
int print_last_digit(int num)
{
	int x;

	if (num < 0)
	{
		x = (num % 10) * -1;
	}
	else
		x = num % 10;
	_putchar('0' + x);
	return (x);
}
