#include "main.h"
#include <stdio.h>
/**
 * fib - prints the sum of even fibonacci numberes <= 4000000
 */
void fib(void)
{
	long fib1 = 1;
	long fib2 = 2;
	long fib3 = fib1 + fib2;
	long sum = 2;

	while (fib3 <= 4000000)
	{
		fib1 = fib2;
		fib2 = fib3;
		fib3 = fib1 + fib2;
		if (fib3 % 2 == 0)
			sum += fib3;
	}
	printf("%lu\n", sum);
}
/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	fib();

	return (0);
}
