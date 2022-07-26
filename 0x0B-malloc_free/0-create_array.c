#include "main.h"

/**
 * create_array - creates an array of chars
 *
 * @size: size of the array
 * @c: initializes it with a specific char
 *
 *
 * Return: - Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	unsigned int a;
	char *str;

	a = size;

	str = malloc(sizeof(str) * a);


	for (i = 0; i < size; i++)
	{
		if (size == 0)
		{
			/* return (NULL); */
			printf("Can't allocate %lu bytes (after %u calls)\n", (sizeof(str) * a), i);
			return (NULL);
		}

		str[i] = c;
	}
	return (str);
	free(str);
}
