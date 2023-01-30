#include "search_algos.h"
#include <math.h>

/**
  * new_binary_search - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @start: The starting index of the [sub]array to search.
  * @end: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */

int new_binary_search(int *array, int start, int end, int value)
{
	int mid, i;

	if (!array)
		return (-1);

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (new_binary_search(array, start, mid - 1, value));
		return (new_binary_search(array, mid + 1, end, value));
	}
	return (-1);
}

#include <math.h>
/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound, i = 0;

	if (!array)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	bound = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, bound);
	return (new_binary_search(array, i / 2, bound, value));
}
