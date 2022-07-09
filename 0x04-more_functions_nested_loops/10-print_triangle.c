#include "main.h"

/**
 * print_triangle - prints a triangle of characters
 * _putchar: prints a character
 *
 * Description: 'This program prints a given size of triangle'
 *
 * @size: The size of the triangle.
 *
 */
void print_triangle(int size)
{
	int r, s, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (s = r; s < size; s++)
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

}
