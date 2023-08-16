#include "main.h"
#include <stdio.h>
/**
 * natural - prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded) followed by a new line
 */
void natural(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i += 3)
	{
		if (i + 3 < 1024)
			sum += i + 3;
		else
			break;
	}
	for (i = 0; i < 1024; i += 5)
	{
		if (i + 5 < 1024)
			sum += i + 5;
		else
			break;
	}
	for (i = 0; i < 1024; i += 15)
	{
		if (i + 15 < 1024)
			sum -= i + 15;
	}
	printf("%d\n", sum);
}
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	natural();

	return (0);
}
