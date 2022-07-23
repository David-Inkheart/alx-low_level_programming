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
	int count, digit, sum = 0;

	for (count = 1; count < argc; count++)
	{
		for (digit = 0; argv[count][digit]; digit++)
		{
			if (argv[count][digit] < '0' || argv[count][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[count]);
	}

	printf("%d\n", sum);

	return (0);
}
