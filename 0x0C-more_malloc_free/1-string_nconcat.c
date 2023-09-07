#include "main.h"
#include <stdlib.h>

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
	unsigned int c1 = 0, i = 0;
	char *ptr1, *nptr;

	if (s1 != NULL)
	{
		ptr1 = s1;
		while (*ptr1 != '\0')
		{
			c1++;
			ptr1++;
		}
	}
	nptr = malloc(c1 + n + 1);

	if (nptr == 0)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; i < c1; i++)
			nptr[i] = s1[i];
	}

	if (s2 != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (s2[i] == '\0')
				break;
			nptr[c1 + i] = s2[i];
		}
	}
	nptr[c1 + n + 1] = '\0';
	return (nptr);
}
