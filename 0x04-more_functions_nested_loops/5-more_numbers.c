#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14 ten times.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int ch;

	while (i < 10)
{
	ch = 0;
	while (ch <= 14)
	{
	if (ch > 9)
	_putchar(ch / 10 + '0');
	_putchar(ch % 10 + '0');
	ch++;
	}
	_putchar('\n');
	i++;
}
}
