#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
* _strcmp - a function that compares two strings.
* the function should work exactly like strcmp
*
* Compare S1 and S2, returning less than, equal to or
* greater than zero if S1 is lexicographically less than,
* equal to or greater than S2.
*
* @s1: first string set
* @s2: string to be compared with
*
* Return: 0, if the s1 and s2 are equal;
* a negative value if s1 is less than s2;
* a positive value if s1 is greater than s2.
*/
int _strcmp(char *s1, char *s2)
{
	unsigned char *p1 = (unsigned char *) s1;
	unsigned char *p2 = (unsigned char *) s2;
	unsigned char c1, c2;

	do {
		c1 = (unsigned char) *p1++;
		c2 = (unsigned char) *p2++;

		if (c1 == '\0')
			return (c1 - c2);

	} while (c1 == c2);

	return (c1 - c2);
}
