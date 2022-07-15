#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 *
 *
 * @s: string to be converted.
 *
 * Return: Capitalized Words
 */
char *cap_string(char *s)
{
	int i;

	i = 0;

/* looping through s till the NULL byte to access each element */

	while (*(s + i) != '\0')
	{
/* checking if character is in lowercase */

		if (*(s + 0) >= 97 && *(s + 0) <= 123)
/* converting to uppercase by deducting ascii difference */
		{
			*(s + 0) = *(s + 0) - 32;
		}

		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
		s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
		s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (*(s + i + 1) >= 97 && *(s + i + 1) <= 123)

				*(s + i + 1) = *(s + i + 1) - 32;
		}
		i++;
	}
	return (s);
}
