#include "main.h"
/**
 * main - Entry point
 * @c: The character to print
 * Description: 'This program prints the alphabet in lowercase'
 * The printout is followed by a newline
 * Return: Always 0 (Success)
 */
int main(int c)
{
	return (((c >= 'a' && c <= 'z'))
	|| ((c >= 'A') && (c <= 'Z')));
}
