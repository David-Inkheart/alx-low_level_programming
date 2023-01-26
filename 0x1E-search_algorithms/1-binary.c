#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array
 * of integers using the Binary search algorithm
 *
 * assumption is made that array will be sorted in ascending order
 * assumption is made that value won’t appear more than once in array
 *
 * @array: -  pointer to the first element of the array to search in
 * @size: - number of elements in array
 * @value: - value is to search for
 *
 * Return:  index where value is located,
 * If value is not present in array or if array is NULL
 * function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		mid = (L + R) / 2;

		/* printing the array being searched */
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			printf("%d", array[i]);
			if (i < R)
				printf(", ");
		}
		printf("\n");

		if (array[mid] < value)
		{
			L = mid + 1;
		}
		else if (array[mid] > value)
		{
			R = mid - 1;
		}
		else
		{
			return (mid);
		}
	}

	return (-1);
}
