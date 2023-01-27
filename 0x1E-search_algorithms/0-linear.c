#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 *
 * @array: -  pointer to the first element of the array to search in
 * @size: - number of elements in array
 * @value: - function returns the first index where value is located
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}

	}
	return (-1);
}
