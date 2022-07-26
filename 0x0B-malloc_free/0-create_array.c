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
	char *str;
	unsigned int a;

	a = size;

	str = malloc(sizeof(char) * a);

	for (i = 0; i < size; i++)
	{
		if (str == NULL)
		{
			printf("Can't allocate %lu byte (after %u calls)\n", (sizeof(char) * a), i);
			return (NULL);
		}
		if (size == 0)
		{
			printf("failed to allocate memory\n");
			return (NULL);
		}

		str[i] = c;
	}
	return (str);
	free(str);
}


