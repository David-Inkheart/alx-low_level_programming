#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: destination memory area
 * @src: memory area to be copied
 * @n: max number of bytes to be copied.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p;
	char *pt;
	unsigned int i;

	p = dest;
	pt = src;

	for (i = 0; i < n; i++)
	{
		p[i] = pt[i];
	}

	return (dest);
}
