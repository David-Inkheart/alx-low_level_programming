#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'This program prints all the number of base 16 in lowercase'
 * Only the function putchar can be used, and only three times.
 * The printout is followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = '0';
	int cha = 'a';

	while (ch <= '9')
{
	putchar(ch);
	ch++;
}
	while (cha <= 'f')
{
	putchar(cha);
	cha++;
}
{
	putchar('\n');
}

	return (0);
}
