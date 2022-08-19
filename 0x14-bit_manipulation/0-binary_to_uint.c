#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int dec_num, power;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++) /* getting length of string */
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	power = 1; /* 2^0? */
	dec_num = 0;

	for (len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			dec_num = dec_num + power; /* 0 + 1 */

		else if (b[len] == '0')
			dec_num = dec_num + 0;
	}
	return (dec_num);
}
