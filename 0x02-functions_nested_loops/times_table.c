#include "main.h"
/**
 * main - Entry point
 * r = row, c = column, p = product of r and c
 *
 * Return: time table
 */
int main(void)
{
	int r, c, p;

	for (r = 0; r <= 9; r++)
{
	_putchar('0');
	_putchar(',');
	_putchar(' ');
	for (c = 1; c <= 9; c++)
{
	d = (r * c);
	if ((p / 10) > 0)
	{
	_putchar((p / 10) + '0');
	}
	else
	{
	_putchar(' ');
	}
	_putchar((p % 10) + '0');

	if (c < 9)
	{
	_putchar(',');
	_putchar(' ');
	}
}
	_putchar('\n');
}

}
