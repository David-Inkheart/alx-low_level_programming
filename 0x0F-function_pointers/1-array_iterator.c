#include "function_pointers.h"
/**
 * array_iterator - execute a function on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
