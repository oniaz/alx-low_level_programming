#include "main.h"
#include <stdio.h>
/**
 * fib - prints the first fibonacci numberes starting from 1
 */
void fib(void)
{
	long fib1 = 1;
	long fib2 = 2;
	long fib3 = fib1 + fib2;
	int i = 0;

	printf("%lu, %lu, %lu", fib1, fib2, fib3);
	for (i; i <= 50; i++)
	{
		fib1 = fib2;
		fib2 = fib3;
		fib3 = fib1 + fib2;
		printf(", %lu", fib3);
	}
	printf("\n");
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
