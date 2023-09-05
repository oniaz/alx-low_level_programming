#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: pointer to the concatenated string, or null
 */
char *str_concat(char *s1, char *s2)
{
	int c1 = 0, c2 = 0, i = 0;
	char *ptr1, *ptr2, *nptr;

	if (s1 != NULL)
	{
		ptr1 = s1;
		while (*ptr1 != '\0')
		{
			c1++;
			ptr1++;
		}
	}
	if (s2 != NULL)
	{
		ptr2 = s2;
		while (*ptr2 != '\0')
		{
			c2++;
			ptr2++;
		}
	}
	nptr = (char *)malloc(c1 + c2 + 1);
	if (nptr == 0)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < c1; i++)
		{
			nptr[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; i < c2; i++)
		{
			nptr[c1 + i] = s2[i];
		}
	}
	nptr[c1 + c2 + 1] = '\0';
	return (nptr);
}
