#include "variadic_functions.h"

/**
 * *_nilly - checks if string is NULL
 * @s: string
 * Return: "(nil)" if string is NULL, otherwise return the string
 */
char *_nilly(char *s)
{
	if (s == NULL)
	{
		char *nia = "(nil)";

		return (nia);
	}
	return (s);
}

/**
 * *_sep - checks if string separator is NULL
 * @s: string
 * Return: "" if string is NULL, otherwise return the string
 */
const char *_sep(const char *s)
{
	if (s == NULL)
	{
		char *sep = "";

		return (sep);
	}
	return (s);
}

/**
 * print_strings - prints strings, followed by a new line
 * @separator: separator between printed strings
 * @n: number of arguments to be printed
 * @...: strings to printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i;
		va_list tots;
		char *elmo;

		va_start(tots, n);

		for (i = 0; i < n - 1; i++)
		{
			elmo = va_arg(tots, char *);

			printf("%s%s", _nilly(elmo), _sep(separator));
		}

		elmo = va_arg(tots, char *);

		printf("%s", _nilly(elmo));
		va_end(tots);
	}

	printf("\n");
}
