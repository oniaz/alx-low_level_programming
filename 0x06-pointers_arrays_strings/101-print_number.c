#include "main.h"

/**
 * unflipNprint - flips a given number then prints it
 * @flippedNum: the number
 * @digitCount: number of digints in the number
 */
void unflipNprint(int flippedNum, int digitCount)
{
	int digit = 0;

	while (digitCount)
	{
		digit = flippedNum % 10;
		if (digit < 0)
			digit *= -1;
		_putchar(digit + '0');
		flippedNum = flippedNum / 10;
		digitCount--;
	}
}
/**
 * print_number - prints a given integer.
 * @n: the integer to be printed
 */
void print_number(int n)
{
	int num = n, negativeFlag = 0, digitCount, digit = 0, flippedNum = 0, i;

	if (n == 0)
	{
		_putchar(0 + '0');
		return;
	}

	if (n < 0)
		negativeFlag = 1;

	for (digitCount = 0; num && digitCount < 9; num /= 10)
		digitCount++;
	num = n;

	for (i = 0; i < digitCount; i++)
	{
		digit = num % 10;
		flippedNum *= 10;
		flippedNum += digit;
		num = num / 10;
	}

	if (negativeFlag)
		_putchar('-');

	if (num)
	{
		if (num < 0)
			num *= -1;
		_putchar(num + '0');
	}
	unflipNprint(flippedNum, digitCount);
}
