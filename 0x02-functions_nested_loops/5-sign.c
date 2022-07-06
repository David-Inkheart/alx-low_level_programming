#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The character to print
 *
 * Return: if greater than zero return 1.
 * if less than zero -1 is returned, and 0 is returned if set equal to zero
 */
int print_sign(int n)
{

	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}

}
