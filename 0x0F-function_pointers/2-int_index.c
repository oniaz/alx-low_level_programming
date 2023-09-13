#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: given array to be passed through the given function
 * @size: size of the given array
 * @cmp: pointer to the function that perform the comparison
 *
 * Return: index of the first elemnt found or -1 in cases of: element found,
 * size = 0, or null pointers.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
