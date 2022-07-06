#include "main.h"
/**
 * _isalpha - Entry point of function that checks the alphabetic  character
 * @c: The character to print
 * Description: 'This program prints the alphabet in lowercase'
 * The printout is followed by a newline
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	return (((c >= 'a') && (c <= 'z'))
	|| ((c >= 'A') && (c <= 'Z')));
}
