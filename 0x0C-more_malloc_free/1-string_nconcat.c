#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * The returned pointer shall point to a newly allocated space in memory
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 *
 * If n is greater or equal to the length of s2
 * then use the entire string s2
 *
 * if NULL is passed, treat it as an empty string
 *
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @n: first n bytes of string 2 to be concatenated to string 1
 *
 * Return: - Returns a pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l, m, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l = strlen(s1) + n + 1;
	ptr = malloc(l * sizeof(char));
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (ptr == NULL)
		{
			printf("Can't allocate bytes (after %u calls)\n", i);
			return (NULL);
			free(ptr);
		}
		ptr[i] = s1[i];
	}
	m = strlen(s2);
	j = strlen(ptr);
	if (n >= m)
	{
		for (i = 0; i <= m; i++)
		{
			ptr[j + i] = s2[i];
		}
	}
	else if (n < m)
	{
		for (i = 0; i < n; i++)
		{
			ptr[j + i] = s2[i];
		}
	}

	ptr[l] = '\0';
	return (ptr);
}
