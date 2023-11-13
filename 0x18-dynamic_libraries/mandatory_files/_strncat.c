#include "main.h"

/**
 * *_strncat - concatenates two strings useing at most n bytes from src
 * @src: pointer to source string that will be appended to destination
 * @dest: pointer to destination string where contents of src will be added
 * @n: where the concatenation ends
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (n--)
	{
		if (*src == '\0')
			break;

		*ptr = *src;
		src++;
		ptr++;
	}

	*ptr = '\0';

	return (dest);
}
