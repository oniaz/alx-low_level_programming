#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - allocated space in memory containing given string
 * @str: pointer to given string
 * Return: pointer to allocated memory containing copied string
 */
char *_strdup(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		char *ptr = str;
		int c = 1;
		int i;
		char *nptr;

		while (*ptr != '\0')
		{
			c++;
			ptr++;
		}

		nptr = (char *)malloc(c);

		if (nptr == 0)
			return (0);

		for (i = 0; i < c; i++)
		{
			nptr[i] = str[i];
		}

		return (nptr);
	}
}
