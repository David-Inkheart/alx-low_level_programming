#include "main.h"
/**
 * _islower - checks for lowercase character c
 *@c: The character to print
 * int c - a random letter from 'a' to 'z''
 * Return: 1 if character is lowercase, 0 if not.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	return (1);
	return (0);
}
