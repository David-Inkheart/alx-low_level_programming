#include "main.h"
#include <string.h>
/**
* rev_string - a function that reverses a string
*
* @s: string to be reversed
*
*
*/
void rev_string(char *s)
{
	int i, n = strlen(s);
	char *b, *e, temp;

	b = s;
	e = s;

	for (i = 0; i < n - 1; i++)
	e++;

	for (i = 0; i < n/2; i++)
	{
		temp = *e;
		*e = *b;
		*b = temp;

		b++;
		e--;
	}
}
