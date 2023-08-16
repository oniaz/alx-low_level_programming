#include "main.h"
/**
 * print_last_digit - return the last digit of a number
 * @num: int to get the lst digit of
 * Return: last digit of the number
*/
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = 0 - num;
	}
	_putchar('0' + num % 10);
	return (num % 10);
}
