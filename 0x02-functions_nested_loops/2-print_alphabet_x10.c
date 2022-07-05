#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase using only _putchar
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int ch;

	while (i < 10)
{
	ch = 'a';
	while (ch <= 'z')
	{
	_putchar(ch);
	ch++;
	}
	_putchar('\n');
	i++;
}
}
