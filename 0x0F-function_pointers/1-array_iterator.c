#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - passed as parameters, executes a function on array elements
 * @array: given array to be passed through the given function
 * @size: size of the given array
 * @action: pointer to the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
