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
	unsigned int l = n, i;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
		l++;

	ptr = malloc((l + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
	{
		ptr[l++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)

	{
		ptr[l++] = s2[i];
	}

	ptr[l] = '\0';

	return (ptr);
}
