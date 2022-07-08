#include "main.h"

/**
 * print_line - prints a line of characters
 * _putchar: prints a character
 *
 * Description: 'This program prints _ for n times'
 *
 * @n: max number of times a character is to be printed
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');

		i++;

	}
	_putchar('\n');
}

