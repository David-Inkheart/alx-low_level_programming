#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created by
 * my alloc_grid function.
 *
 * @grid: pointer to 2D array
 * @height: row or pointer to string or 1D array
 *
 * Return: - nothing
 *
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
