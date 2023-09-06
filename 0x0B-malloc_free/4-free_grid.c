#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a given grid
 * @grid: pointer to the grid
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
