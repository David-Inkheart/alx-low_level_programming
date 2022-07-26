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
	unsigned int i, n = strlen(str) + 1;
	char *s;
	char *d;

	d = malloc(sizeof(char) * (n + 1));
	if (str == 0)
	{
		return (NULL);
	}
/* Using the concept of pointer to a pointer to point to a whole string */
	s = str;

	for (i = 0; i <= n; i++)
	{
		if (str == NULL)
		{
			printf("Can't alo %lu byte (after %u)\n", (sizeof(char) * (n + 1)), i);
			return (NULL);
		}
/* str points only to the address of the first byte */
		d[i] = s[i];
	}

		return (d);

		free(d);
}
