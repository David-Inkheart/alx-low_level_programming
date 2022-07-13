#include "main.h"
#include <string.h>

/**
* _strlen - calculate the length of a string
* @s: The pointer to the string
*
* Return: n
*
*/
int _strlen(char *s)
{
	int n = 0;

	while (s[n])
	++n;

	return (n);
}
