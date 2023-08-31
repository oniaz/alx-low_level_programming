#include "main.h"

/**
 * meow - checks if a number is a prime number
 * @n: number to be tested
 * @x: divisor
 * Return: 1 if prime otherwise 0
 */
int meow(int n, int x)
{
	if (n == 2)
		return (0);

	if (x == 1)
		return (1);

	if (n % x == 0)
		return (0);

	else
		return (meow(n, x - 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to be tested
 * Return: 1 if prime otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	else
		return (meow(n, n / 2));
}
