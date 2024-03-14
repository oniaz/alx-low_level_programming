#include "search_algos.h"

/**
 * print_array - prints a specific portion of an array.
 * @array: pointer to the first element of the array.
 * @start: starting index of the array to be printed.
 * @end: ending index of the array to be printed.
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");

	while (start < end)
	{
		printf("%d, ", array[start]);
		start++;
	}

	printf("%d\n", array[start]);
}

/**
 * binary_search - searches for a value in an array of integers using the
 * binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in the array.
 * @value: the value to search for.
 *
 * Return: the index where value is located or -1 if value is not present
 * in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid;

	if (!array || !size)
		return (-1);

	start = 0, end = size - 1;

	while (end > start)
	{
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}

	print_array(array, start, end);

	if (array[start] == value)
		return (start);

	return (-1);
}
