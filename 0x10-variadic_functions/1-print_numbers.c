#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator between printed numebrs
 * @n: number of arguments to be printed
 * @...: numbers to printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i;
		va_list tots;
		int flag = 0;

		if (separator != NULL)
			flag = 1;

		va_start(tots, n);

		for (i = 0; i < n - 1; i++)
		{
			if (flag == 0)
				printf("%d", va_arg(tots, int));
			else
				printf("%d%s", va_arg(tots, int), separator);
		}

		printf("%d", va_arg(tots, int));
		va_end(tots);
	}

	printf("\n");
}
