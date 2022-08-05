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
			for (i = 0; i < height; i++)

			printf("Can't allocate %lu byte\n", (sizeof(int *) * width));
			return (NULL);
		}
	}
	return (arr);
}
