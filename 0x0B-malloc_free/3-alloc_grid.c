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

	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}
