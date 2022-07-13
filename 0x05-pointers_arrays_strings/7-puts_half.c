#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts_half - writes the string str and a trailing newline to stdout
* the function should print the second half of the string
* If the number of characters is odd, the function should print the last n
* characters of the string, where n = (length_of_the_string - 1) / 2
*
* @str: string to be written out to stdout
*
* Return: nothing
*
*/
void puts_half(char *str)
{
	int i, j, l, n;

/* length of the string */

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	l = i - 1;
/* divides the length into halves */

	n = (l / 2);

/* prints the second half of the string */

	for (j = n + 1; j <= l; j++)
	{
	_putchar(str[j]);
	}
	_putchar('\n');
}
