#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: column of the 2D array
 * @height: row of the 2D array
 *
 * Return: an int pointer
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **arr;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		printf("Can't allocate %lu byte\n", (sizeof(int *) * height));
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			printf("Can't allocate %lu byte\n", (sizeof(int *) * width));
			return (NULL);
		}
	}
	return (arr);
}

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
