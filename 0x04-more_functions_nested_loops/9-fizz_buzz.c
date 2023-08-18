#include "main.h"
#include <stdio.h>

/**
 * fizzbuzz - fizzbuzzes and stuff
 * print numbers from 1:100
 * if number is a multiple of 3 print Fizz
 * if number is a multiple of 5 print Buzz
 * if number is a multiple of both 3 and 5 print FizzBuzz
 */
void fizzbuzz(void)
{
	int i;

	printf("%d", 1);
	for (i = 2; i <= 100; i++)
	{
		printf(" ");
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if ((i % 3 != 0) && (i % 5 != 0))
			printf("%d", i);
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	fizzbuzz();
	return (0);
}
