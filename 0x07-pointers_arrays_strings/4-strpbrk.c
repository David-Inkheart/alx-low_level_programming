#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string to be searched
 * @accept: string to match
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	char *pt;

	if (s != NULL && accept != NULL)
	{
		for (p = s; *p; p++)
		{
			for (pt = accept; *pt; pt++)
			{
				if (*p == *pt)
					return (p);
			}
		}
	}
	return (NULL);
}
