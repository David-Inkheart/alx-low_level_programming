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
	int i, n, l;

	l = strlen(str);

	for (i = l / 2; str[i] != '\0'; i++)
	{
		n = (l - 1) / 2;

		if (n / 2 == 1 && str[n] != '\0')
		{
		_putchar(str[n]);
		n++;
		}
		else
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
