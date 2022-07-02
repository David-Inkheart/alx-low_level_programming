#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'This program prints the alphabet in lowercase in reverse'
 * The printout is followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
{
	putchar(ch);
	ch--;
}
{
	putchar('\n');
}

	return (0);
}
