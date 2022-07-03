#include <stdio.h>
/**
 * main - Entry point
 *
 * The program prints all possible combinations of single-digit numbers.
 * umbers must be separated by ,, followed by a space.
 * Numbers should be printed in ascending order.
 * Only the function putchar can be used, and only four times.
 * The printout is followed by a newline.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
{
	putchar(c);
	if (c < '9')
	putchar(',');
	if (c < '9')
	putchar(' ');
}
{
	putchar('\n');
}
	return (0);
}
