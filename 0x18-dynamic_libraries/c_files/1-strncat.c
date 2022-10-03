#include "main.h"
#include <string.h>


/**
* char*_strncat - a function that concatenates two strings.
* The _strncat function is similar to the _strcat function, except that
* it will use at most n bytes from src; and
* src does not need to be null-terminated if it contains n or more bytes
*
* @dest: first string set
* @src: string to be appended
* @n: integer representing the length of the string src
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
/* declaration of character. size_t is long unsigned integer. */

	int i;
	size_t l = strlen(dest);

/* using i - 'index positions' to loop through the size of src */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[l + i] = src[i];
/* note that the index loop stops before the NULL character */


/* size of src with its string has been appended to dest */
	}
	return (dest);
}
