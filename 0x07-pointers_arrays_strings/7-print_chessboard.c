#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 *
 * @a: row of two dimensional array.
 *
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		if (j == 7)
			break;
		{
			printf("\n");
		}
	}
}

