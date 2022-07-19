#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string to be searched
 * @c: character to search for.
 *
 * Return: pointer to first occurence of c, else NULL.
 */
char *_strchr(char *s, char c)
{

	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return (NULL);
		}
	}
	return (NULL);
}
