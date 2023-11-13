#include "main.h"

/**
 * *_memcpy - encodes a string using rot13
 * @dest: pointer to dest area
 * @src: pointer to src area
 * @n: number of bytes to be filled
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	return (dest);
}
