#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'This program prints the alphabet in lowercase and uppercase'
 * Only the function putchar can be used, and only three times.
 * The printout is followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	int cha = 'A';

	while (ch <= 'z')
{
	putchar(ch);
	ch++;
}
	while (cha <= 'Z')
{
	putchar(cha);
	cha++;
}
{
	putchar('\n');
}

	return (0);
}
