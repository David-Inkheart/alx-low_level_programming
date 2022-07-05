#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'This program prints the alphabet in lowercase'
 * The printout is followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
{
	_putchar(ch);
	ch++;
}
{
	_putchar('\n');
}

	return (0);
}
