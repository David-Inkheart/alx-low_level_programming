#include "main.h"
/**
 * main - Entry point
 * @n: integer to use.
 * Description: testing for sign
 *
 * Return: Always 0 (Success)
 */
int main(int n)
{

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}

	return (0);
}
