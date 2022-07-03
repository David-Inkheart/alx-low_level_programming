#include <stdio.h>
/**
 * main - Entry point
 *
 * A program that prints all possible different combinations of three digits.
 * Numbers must be separated by ',' followed by a space.
 * pick only one instance of the same combination of the 3digits 0,1,2
 * The three digits must be different.
 * Print only the smallest combination of three digits.
 * Numbers should be printed in ascending order, with three digits.
 * You can only use the putchar function to print.
 *You can only use putchar six times maximum in your code.
 *You are not allowed to use any variable of type char.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 1000; a++)
{
	b = a / 100;
	c = (a / 10) % 10;
	d = a % 10;

	if (b < c && c < d)
{
	putchar(b + '0');
	putchar(c + '0');
	putchar(d + '0');

	if (a < 700)
{
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');

	return (0);
}
