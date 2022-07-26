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

	char *str = malloc(sizeof(char) * size);


	for (i = 0; i < size; i++)
	{
		if (size == 0)
		{
			return (NULL);
		}

		str[i] = c;
	}
	return (str);
	free(str);
}
