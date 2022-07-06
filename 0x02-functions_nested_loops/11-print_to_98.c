#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98
 *
 * @n: The number for counting
 * Return: natural numbers
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
	while (n > 98)
	printf("%d, ", n--);
	printf("%d\n", n);
	}
	else
	{
	while (n < 98)
	printf("%d, ", n++);
	printf("%d\n", n);
	}
}
