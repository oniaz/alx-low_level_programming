#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of ints elemnts from min to max
 * @min: min element
 * @max: max element
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int i, o;

	if (min > max)
		return (NULL);

	o = (max - min + 1);

	int *ptr = malloc(sizeof(int) * o);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < o; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
