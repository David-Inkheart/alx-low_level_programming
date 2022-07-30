#include "main.h"

/**
 * main - print result of multiplication of +ve nums, followed by a new line
 *
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 * If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits. If not,
 * print Error, followed by a new line, and exit with a status of 98
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: - Always 0 on success.
 *
 */
int main(int argc, char *argv[])
{
	int i, j, mul = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", mul);

	return (0);
}
