#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase using only _putchar
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
{
	_putchar(ch);
	ch++;
}

	_putchar('\n');

}
