#include "main.h"

/**
 * main - Entry point
 * The character to print
 *
 * Return: Always 0 (Success)
 */
int main(void)
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
