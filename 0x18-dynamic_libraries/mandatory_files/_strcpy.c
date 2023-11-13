#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return (ptr);
}
