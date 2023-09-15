#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: arguments passed to be printed
 */
void print_all(const char *const format, ...)
{
	va_list liz;
	unsigned long int suzi = 0, i = 0;
	char *seppy = "", *t;

	if (format)
	{
		while (format[i] != '\0')
			suzi++, i++;
		i = 0;
		va_start(liz, format);
		while (i < suzi)
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seppy, va_arg(liz, int));
					break;
				case 'i':
					printf("%s%d", seppy, va_arg(liz, int));
					break;
				case 'f':
					printf("%s%f", seppy, va_arg(liz, double));
					break;
				case 's':
					t = va_arg(liz, char *);
					if (!t)
						t = "(nil)";
					printf("%s%s", seppy, t);
					break;
				default:
					i++;
					continue;
			}
			i++, seppy = ", ";
		}
		va_end(liz);
		printf("\n");
	}
}
