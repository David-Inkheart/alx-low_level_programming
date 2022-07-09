#include "main.h"

/**
 * main - Entry point
 * _putchar: prints a character
 *
 * Description: 'This program prints a pattern for given size'
 *
 *
 * Return: 0
 */
int main(void)
{
	int n, r, s, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= n; r++)
		{
			for (s = r; s < n; s++)
			{
				_putchar(' ');
			}
				for (c = 1; c <= r; c++)
				{
					_putchar('#');
				}
		_putchar('\n');
		}
	}
	return (0);
}
