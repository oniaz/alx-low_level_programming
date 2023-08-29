#include "main.h"

/**
 * *_strstr - searches a string for any of a set of bytes
 * @haystack: pointer to the haystack string
 * @needle: pointer to needle string
 * Return: pointer to the needle in the haystack if found otherwise null
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *ptr = needle;
		char *start = haystack;
		char *s = haystack;

		while (*ptr != '\0' && *s != '\0')
		{
			if (*s == *ptr)
			{
				s++;
				ptr++;
				if (*ptr == '\0')
					return (start);
			}
			else
				break;
		}
		haystack++;
	}

	return (0);
	}
