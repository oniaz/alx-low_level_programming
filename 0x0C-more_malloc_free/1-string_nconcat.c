#include "main.h"
#include <stdlib.h>

/**
 * counter - counts string chars
 * @s: pointer to the string
 *
 * Return: char count of the string
 */
unsigned int counter(char *s)
{
	unsigned int c = 0;
	char *ptr;

	if (s != NULL)
	{
		ptr = s;
		while (*ptr != '\0')
		{
			c++;
			ptr++;
		}
	}

	return (c);
}

/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of chars from s2 to be concatenated
 *
 * Return: pointer to the concatenated string, or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c1, i = 0;
	char *nptr;

	c1 = counter(s1);
	if (counter(s2) < n)
		n = counter(s2);

	nptr = malloc(c1 + n + 1);

	if (nptr == 0)
		return (NULL);

	for (i = 0; i < c1; i++)
		nptr[i] = s1[i];

	for (i = 0; i < n; i++)
		nptr[c1 + i] = s2[i];

	nptr[c1 + n] = '\0';

	return (nptr);
}
