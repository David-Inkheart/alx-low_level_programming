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
	char *p1;
	char *p2;
	unsigned int i;

	p1 = dest;
	p2 = src;

	for (i = 0; i < n; i++)
		*p1 = *p2;

	return (dest);
}
