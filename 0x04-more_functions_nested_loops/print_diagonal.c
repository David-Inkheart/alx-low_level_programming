#include "main.h"

/**
 * main - Entry point
 * _putchar: prints a character
 * Description: 'This program prints _ for n times'
 *
 * Return: Always 0 (Success)
 */
int main(void)
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

	return (0);
}
