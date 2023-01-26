#include "search_algos.h"

/**
 * jump_search - function that searches for a value in an array
 * of integers using the Jump search algorithm
 *
 * assumption is made that array will be sorted in ascending order
 * assumption is made that value won’t appear more than once in array
 * use the square root of the size of the array as the jump step
 *
 * @array: -  pointer to the first element of the array to search in
 * @size: - number of elements in array
 * @value: - value is to search for
 *
 * Return: first index where value is located,
 * If value is not present in array or if array is NULL
 * function must return -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t jump_size = 0;
	size_t step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	for (; jump_size < size && array[jump_size] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump_size, array[jump_size]);
		i = jump_size;
		jump_size += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump_size);

	jump_size = fmin(jump_size, size - 1);

	for (; i < jump_size && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return ((int)i);
	else
		return (-1);
}
