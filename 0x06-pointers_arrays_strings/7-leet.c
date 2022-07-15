#include "main.h"

/**
 * leet - encode a string into 1337
 * ONE if. TWO for loops only
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int i, j;
	char *find = "aAeEoOtTlL";
	char *repl = "4433007711";

/* loop throuth the string to find letters */
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == find[j])
			{
				s[i] = repl[j];
			}
		}

	}
	return (s);

}
