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
	unsigned int i, n, m, l, j;
	char *s, *p1, *p2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	j =  (strlen(s1) + strlen(s2)) + 1;
	n = strlen(s1) + 1;
	s = malloc(sizeof(char) * j);
	p1 = s1;

	for (i = 0; i <= n; i++)
	{
		if (s == NULL)
		{
			printf("Can't allocate %lu byte (after %u calls)\n", (sizeof(char) * j), i);
			return (NULL);
		}
		s[i] = p1[i];
	}
	p2 = s2;
	m = strlen(s2);
	l = strlen(s);

	for (i = 0; i < m; i++)
	{
		if (s == NULL)
		{
			printf("Can't allocate %lu byte (after %u calls)\n", (sizeof(char) * n), j);
			return (NULL);
		}
	s[l + i] = p2[i];
	}
	return (s);
	free(s);
}
