#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @size: Number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * function does not return 0
 * @array: a pointer that points to an array
 * Return: if no element matches the array, -1 is returned
 * else, the index of the first match is returned.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
