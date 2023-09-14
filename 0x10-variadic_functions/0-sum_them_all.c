#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums passed arguments
 * @n: number of arguments to be summed
 * @...: arguments to be summed
 *
 * Return: sum of arguments, or 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	sum = 0;

	if (n != 0)
	{
		va_list tots;

		va_start(tots, n);

		for (i = 0; i < n; i++)
			sum += va_arg(tots, int);
		va_end(tots);
	}

	return (sum);
}
