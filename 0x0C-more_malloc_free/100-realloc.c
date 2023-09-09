#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to previously allocated memory
 * @old_size: the size of the previously allocated memory
 * @new_size: the size of the reallocated memory
 *
 * Return: pointer to the reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a, i;
	char *nptr, *optr;

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
	}

	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size > old_size)
		a = old_size;

	else if (old_size < new_size)
		a = new_size;

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	optr = ptr;
	for (i = 0; i < a; i++)
		nptr[i] = optr[i];
	free(ptr);

	return (nptr);
}
