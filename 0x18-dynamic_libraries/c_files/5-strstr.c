#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * The _strstr() function finds the first occurrence of the substring 'needle'
 *  in the string 'haystack'. The terminating null bytes (\0) are not compared
 * @haystack: string to be searched
 * @needle: substring to search for.
 *
 * Return: pointer to beginning of of the located substring, else NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

/* First scan quickly through the two strings looking for a single-character */
/* match.  When it's found, then compare the rest of the substring. */

	n = needle;

	if (*n == 0)
	{
		return (haystack);
	}
	for ( ; *haystack != 0; haystack += 1)
	{
		if (*haystack != *n)
		{
			continue;
		}

		h = haystack;

		while (1)
		{
			if (*n == 0)
			{
				return (haystack);
			}
			if (*h++ != *n++)
			{
				break;
			}
		}
		n = needle;
	}
	return (NULL);
}
