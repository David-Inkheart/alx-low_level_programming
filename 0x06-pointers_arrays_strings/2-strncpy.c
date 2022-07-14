#include "main.h"
#include <string.h>


/**
* _strncpy - a function that copies the string pointed to by src,
* This function is similar to strcpy,
* except that at most n bytes of src are copied.
* Warning: If there is no null byte among the first n bytes of src,
* the string placed in dest will not be null-terminated
* If the length of src is less than n, _strncpy writes additional null bytes
* to dest to ensure that a total of n bytes are written.
*
* @dest: string to be copied
* @src: string to copy from
* @n: length of src.
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

/* using i - 'index positions' to loop through the length of src */

	for (i = 0; i < n && src[i] != '\0'; i++)
	{

/* the lenght of characters of i through n is copied to dest */

	dest[i] = src[i];
	}

/* if the length of characters copied is less than the whole string */

		for (; i < n; i++)

/* then the terminating NULL byte of src was not copied and should be added */

		{
			dest[i] = '\0';
		}
	return (dest);
}
