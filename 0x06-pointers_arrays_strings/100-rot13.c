#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: pointer to the string
 * Return: pointer to the string after rot13 encoding
 */
char *rot13(char *s)
{
	char *ptr = s;
	int i;
	char arr[104] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'
		, 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w'
		, 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'
		, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u'
		, 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G'
		, 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S'
		, 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E'
		, 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q'
		, 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	while (*ptr != '\0')
	{
		for (i = 0; i < 104; i++)
		{
			if (*ptr == arr[i])
			{
				*ptr = arr[i + 13];
				break;
			}
		}

		ptr++;
	}

	return (s);
}
