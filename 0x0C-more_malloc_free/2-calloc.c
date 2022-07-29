#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * The _calloc function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 *
 * @nmemb: size of array
 * @size: amount of bytes each
 *
 * Return: - Returns a pointer to the array, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;


	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	str = malloc(nmemb * size);

	if (str == NULL)
	{
		return (NULL);
		free(str);
	}

	for (i = 0; i < (size * nmemb); i++)
	{
		str[i] = 0;
	}

	return (str);
}
