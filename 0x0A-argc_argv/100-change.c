#include "main.h"

/**
 * main - prints the minimum number of coins to make change for
 * an amount of money, followed by a new line
 *
 * @argc: count of arguments entered, must be = 1.
 * @argv: points to the arguments passed to main (cents)
 *
 * Return: - If the passed argument is not 1, print Error
 * followed by a new line.
 * If the number passed as the argument is negative
 * print 0, followed by a new line
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");

		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{

		while (cents >= 25)
		{
			cents = cents - 25;
			coins++;
		}
		while (cents >= 10)
		{
			cents = cents - 10;
			coins++;
		}
		while (cents >= 5)
		{
			cents = cents - 5;
			coins++;
		}
		while (cents >= 2)
		{
			cents = cents - 2;
			coins++;
		}

	}

	printf("%d\n", coins);

	return (0);
}
