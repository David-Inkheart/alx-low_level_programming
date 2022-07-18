#include "main.h"

/**
 * _memset - a function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
 * @s: pointer to string to be manipulated
 * @b: char to be placed in memory pointed to by s
 * @n: max number of times b is to be used.
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p;

	for (p = s; n > 0; p++, --n)
		*p = b;

	return (s);
}
