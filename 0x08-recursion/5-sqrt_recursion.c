#include "main.h"

/**
 * purrfkt - checks if a number is a prime number
 * @n: number to be tested
 * @x: divisor
 * Return: 1 if prime otherwise 0
 */
int purrfkt(int n, int x)
{
	if (x > n / 2)
		return (-1);

	if (x == 1)
		return (1);

	if (n == x * x)
		return (x);

	else
		return (purrfkt(n, x + 1));
}

/**
 * _sqrt_recursion - finds out if there's a natural square root for the number
 * then prints it
 * @n: numeber to be tested
 * Return: the natural square root, if it's non existant it returns -1
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	if (n == 1)
		return (1);

	else
		return (purrfkt(n, 2));
}
