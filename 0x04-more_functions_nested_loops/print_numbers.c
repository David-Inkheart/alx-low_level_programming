#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'This program prints numbers, from 0 t0 9'
 * The printout is followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = '0';

	while (ch <= '9')
{
	_putchar(ch);
	ch++;
}
{
	_putchar('\n');
}

	return (0);
}
