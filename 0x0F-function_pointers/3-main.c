#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - a function that checks for cases
 *@argc: Number of characters
 *@argv: A pointer to a character string
 *Return: An error is returned if the number of arguments is wrong,
 *the ops pointer is pointing to address 0, or the
 * second operator string is a NULL terminated character since it's a 2D array
 */

int main(int argc, char *argv[])
{
	int (*ops)(int, int);
	int arg1, arg2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	ops = get_op_func(argv[2]);
	if (ops == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	printf("%d\n", ops(arg1, arg2));
	return (0);
}
