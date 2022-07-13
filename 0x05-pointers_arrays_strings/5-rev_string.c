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
	int i, j, k, t;

/* this next function is to get the length of the string */
	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}

/* j is inistialized as the last character in the string 's' */
	j = i - 1;
	k = 0;

/* k has been initialized to 0 and will loop till j for the string 's' */
	while (k < j)
	{
	t = s[k];	/* a temp variable now holds the string 's' */
	s[k] = s[j];
	s[j] = t;

	k++;
	j--;
	}
}
