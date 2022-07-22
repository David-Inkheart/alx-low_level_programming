#include "main.h"

/**
 * main - Entry point
 *
 * @argc: count of arguments entered, must be >= 1.
 * @argv: argument vector which is a one dimensional array
 * which contains as strings - the arguments passed to main
 *
 * Return: - Always 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int count;


	count = argc - 1;
	{
		printf("%d\n", count);
	}

	return (0);
}

