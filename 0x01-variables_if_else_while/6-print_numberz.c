#include <stdio.h>
/**
 * main - Entry point
 *
 * The program prints all single digit numbers of base 10 starting from 0
 * Only the function putchar can be used, and only two times.
 * The printout is followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
{
	putchar(c);
	c++;
}
{
	putchar('\n');
}
	return (0);
}
