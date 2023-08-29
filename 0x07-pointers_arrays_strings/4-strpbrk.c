#include "main.h"
/**
 * _strspn - searches a string for any of a set of bytes
 * @s: pointer to the string
 * @accept: pointer to the set of chars to be located
 * Return: the first occurrence in the string s of any
 * of the bytes in the string accept
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}

			ptr++;
		}

		s++;
	}

	return (0);
}
