#include "main.h"

/**
 * print_square - prints a square of characters
 * _putchar: prints a character
 *
 * Description: 'This program prints _ for n times'
 *
 * @n: max number of times a character is to be printed
 * Return: void
 */
void print_square(int n)
{
	int r, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= n; r++)
		{
			for (c = 1; c <= n; c++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
