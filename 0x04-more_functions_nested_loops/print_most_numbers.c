#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'This program prints numbers, from 0 t0 9'
 * except numbers 2 and 4
 * The printout is followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
{
	if (ch != '2' && ch != '4')
	_putchar(ch);
}
{
	_putchar('\n');
}

	return (0);
}
