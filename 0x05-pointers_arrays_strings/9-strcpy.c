#include "main.h"
#include <string.h>


/**
* char*_strcpy - a function that copies the string pointed to by src,
* including the terminating null byte (\0),to the buffer pointed to by dest.
*
* @dest: string to be copied
* @src: string to copy from
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	size_t i, n = strlen(src);

	for (i = 0; i <= n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
