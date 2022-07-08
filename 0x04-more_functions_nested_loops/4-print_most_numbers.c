#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Description: 'This program prints the numbers from 0 to 9'
 * Print all the except 2 and 4
 * The printout is followed by a newline
 * The putchar function must be used and only twice
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
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

}
