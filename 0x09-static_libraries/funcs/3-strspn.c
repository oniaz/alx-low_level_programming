#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to the set of chars to be located
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		char *ptr = accept;
		int c = 0;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
				c++;

			ptr++;
		}

		if (c > 0)
		{
			s++;
			len++;
		}
		else
			break;
	}

	return (len);
}

