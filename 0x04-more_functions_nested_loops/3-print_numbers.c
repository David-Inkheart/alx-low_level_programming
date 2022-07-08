#include "main.h"
/**
 * print_numbers - prints the numbers, fron 0 to 9 using only _putchar
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int ch = '0';

	while (ch <= '9')
{
	_putchar(ch);
	ch++;
}

	_putchar('\n');
}
