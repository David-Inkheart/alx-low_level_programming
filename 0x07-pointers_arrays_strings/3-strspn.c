#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string to match
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	char *p;

	for (i = 0; *s; s++, i++)
	{
		for (p = accept; *p && *p != *s; p++)
			;
		if (!*p)
			break;
	}
	return (i);
}
