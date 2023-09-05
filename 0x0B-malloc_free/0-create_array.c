#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: array size
 * @c: the char which the array shall be initialized with
 * Return: pointer to the array, or NULL if it fails or if size = 0
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (0);
	}

	else
	{
		char *ptr = (char *)malloc(size);

		if (ptr == 0)
			return (0);

		else
		{
			int i;

			for (i = 0; i < (int)size; i++)
				ptr[i] = c;

			return (ptr);
		}
	}
}
