#include "main.h"

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase
 *
 * @s: string to be converted.
 *
 * Return: uppercase
 */
char *string_toupper(char *s)
{
	int i, n = strlen(s);

/* looping through s[n] to access each element */

	for (i = 0; i <= n; i++)
	{
/* checking for lowercase characters using the ascii code */
		if (s[i] >= 97 && s[i] <= 123)

/* converting to uppercase by deducting ascii difference */
		s[i] = s[i] - 32;
	}
	return (s);
}
