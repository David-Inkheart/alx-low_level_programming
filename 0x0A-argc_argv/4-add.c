#include "main.h"

/**
 * main - print result of addition of +ve nums, followed by a new line
 *
 * @argc: count of arguments entered, must be >= 1.
 * @argv: argument vector which is a one dimensional array
 * which contains as strings - the arguments passed to main
 *
 * If no number is passed to the program, print 0
 * If one of the number contains symbols that are not digits
 * print Error, followed by a new line, and return 1
 *
 * Return: - If the program does not receive two arguments,
 * your program should print Error, followed by a new line, and return 1
 */
int main(int argc, char *argv[])
{
	int count, sum;


	if (argc < 2)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			if (*argv[count] < '0' || *argv[count] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[count]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

