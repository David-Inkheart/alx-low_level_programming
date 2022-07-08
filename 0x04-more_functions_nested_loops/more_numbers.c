#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'This program prints 10 rows off numbers 0 - 14'
 * The printout is followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
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

	return (0);
}
