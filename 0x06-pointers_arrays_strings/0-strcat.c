#include "main.h"
#include <string.h>


/**
* char*_strcat - a function that concatenates two strings.
* This function appends the src string to the dest string,
* overwriting the terminating null byte (\0) at the end of dest,
* and then adds a terminating null byte
*
* @dest: first string set
* @src: string to be appended
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
/* declaration of character. size_t is a character type. */

	size_t i, n = strlen(src);
	size_t l = strlen(dest);

/* using i - 'index positions' to loop through the size of src */
	for (i = 0; i <= n; i++)
	{
	dest[l + i] = src[i];

/* size of src with its string has been appended to dest */
	}
	return (dest);
}
