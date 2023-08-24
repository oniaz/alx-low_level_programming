#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int swapper;
	int mid = n / 2;

	for (i = 0; i < mid; i++)
	{
		swapper = a[i];
		a[i] = a[n - 1];
		a[n - 1] = swapper;
		n--;
	}
}
