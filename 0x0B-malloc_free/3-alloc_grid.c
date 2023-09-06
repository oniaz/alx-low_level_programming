#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates a grid of zeros
 * @width: given width for the grid
 * @height: given height for the grid
 * Return: pointer to the grid, or NULL if width or height are null or <= 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (!(width > 0 && height > 0))
		return (NULL);

	ptr = malloc(height * 8);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * 4);
		if (ptr == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}
