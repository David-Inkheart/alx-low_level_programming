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
int main(int argc, char *argv[])
{
	int count;


	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}

	return (0);
}

