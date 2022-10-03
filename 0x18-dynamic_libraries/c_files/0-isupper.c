#include "main.h"
/**
 * _isupper - checks for lowercase character c
 *@c: The character to print
 * int c - a random letter from 'A' to 'Z''
 * Return: 1 if character is lowercase, 0 if not.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	return (1);
	return (0);
}
