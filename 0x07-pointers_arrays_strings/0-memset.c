#include "main.h"

/**
 * *_memset- encodes a string using rot13
 * @s: pointer to memory area
 * @b: const byter that wil fill the memory area
 * @n: number of bytes to be filled
 * Return: pointer to the string after rot13 encoding
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
