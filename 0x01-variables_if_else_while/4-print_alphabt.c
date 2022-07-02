#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'This program prints the alphabet in lowercase'
 * Print all the letters except q and e
 * The printout is followed by a newline
 * The putchar function must be used and only twice
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'e' && ch != 'q')
	putchar(ch);
}
{
	putchar('\n');
}

	return (0);
}
