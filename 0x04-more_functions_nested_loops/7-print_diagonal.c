#include "main.h"

/**
 * print_diagonal - prints a line of characters
 * _putchar: prints a character
 *
 * Description: 'This program prints _ for n times'
 *
 * @n: max number of times a character is to be printed
 * Return: void
 */
void print_diagonal(int n)
{

	int r, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= n; r++)
		{
			for (s = 1; s < r; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
