#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2D array of integers.
 * @grid: Pointer to the 2D array of integers.
 * @height: The height of the 2D array.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
