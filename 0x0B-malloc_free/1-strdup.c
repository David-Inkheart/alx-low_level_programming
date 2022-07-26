#include "main.h"

/**
 * _strdup - returns a pointer to a new string which
 * is a duplicate of the string str
 *
 * @str: string to be duplicated
 *
 * Return: - Returns a pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
	unsigned int i, n;
	char *s;
	char *d;

	if (str == NULL)
	{
		return (NULL);
	}

	n = strlen(str) + 1;
	d = malloc(sizeof(char) * n);
/* Using the concept of pointer to a pointer to point to a whole string */
	s = str;

	for (i = 0; i <= n; i++)
	{
		if (d == NULL)
		{
			printf("Can't allocate %lu byte (after %u calls)\n", (sizeof(char) * n), i);
			return (NULL);
		}
/* str points only to the address of the first byte */
		d[i] = s[i];
	}

		return (d);

		free(d);
}
