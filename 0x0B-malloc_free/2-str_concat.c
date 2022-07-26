#include "main.h"

/**
 * str_concat - concatenates two strings and returns a pointer to a newly
 * allocated space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 *
 * @s1: First string given
 * @s2: Secong string given
 *
 * Return: - Pointer on success or NULL on Failure
 *
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, n, m, l;
	char *s, *p1, *p2;


	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	n = strlen(s1) + 1;
	s = malloc(sizeof(char) * n);
/* Using the concept of pointer to a pointer to point to a whole string */
	p1 = s1;

	for (i = 0; i <= n; i++)
	{
		if (s == NULL)
		{
			printf("Can't allocate %lu byte (after %u calls)\n", (sizeof(char) * n), i);
			return (NULL);
		}
/* s1 points only to the address of the first byte */
		s[i] = p1[i];
	}
/* first, s1 was duplicated to s in a new memory location */
	/* now s2 will be concatenated to s */
	p2 = s2;
	m = strlen(s2);
	l = strlen(s);

	for (i = 0; i < m; i++)
	{
		if (s == NULL)
		{
			printf("Can't allocate %lu byte (after %u calls)\n", (sizeof(char) * n), i);
			return (NULL);
		}
	s[l + i] = p2[i];
/* note that the index loop stops before the NULL character */
/*	s[n + i] = '\0'; */

/* size of src with its string has been appended to dest */
	}
	return (s);
	free(s);
}
