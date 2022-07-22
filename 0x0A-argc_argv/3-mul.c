#include "main.h"

/**
 * main - print the result of the multiplication, followed by a new line
 *
 * @argc: count of arguments entered, must be >= 1.
 * @argv: argument vector which is a one dimensional array
 * which contains as strings - the arguments passed to main
 *
 * Return: - If the program does not receive two arguments,
 * your program should print Error, followed by a new line, and return 1
 */
int main(int argc, char *argv[])
{

/*	if ((argc > 1) && (argc < 4)) */
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	else
	{
		printf("%s\n", "Error");

		return (1);
	}
	return (0);
}
