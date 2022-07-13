#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - a function that prints a string, in reverse,
* followed by a new line
* @s: string to be printed in reverse
*
*
* Return: nothing.
*
*/
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);

	for (i = n - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
