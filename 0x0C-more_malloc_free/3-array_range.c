# include "main.h"

/**
 * array_range - creates an array of integers
 * The array created should contain all the values from min
 * (included) to max (included), ordered from min to max.
 *
 * @min: first element of array
 * @max: last element of array
 *
 * If min > max, return NULL
 * If malloc fails, return NULL
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, l;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	l = 0;
	for (i = min; i <= max; i++)
		l++;

	ptr = malloc(sizeof(int) * l);

	if (ptr == NULL)
	{
		return (NULL);
		free(ptr);
	}

	for (i = 0; i < l; i++)
	{
		ptr[i] = min++;
	}


/*	if (ptr[0] == min && ptr[l - 1] == max) */

/*	ptr = array_range(min, max); */

	return (ptr);
}
