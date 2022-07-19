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
	if (*haystack != '\0' && *needle != '\0')
	{
	while (*haystack != 0)
	{
		if ((*haystack == *needle) &&
				(strncmp(haystack, needle, strlen(needle)) == 0))
			return (haystack);
		haystack++;
	}
	}
	return (NULL);
}
