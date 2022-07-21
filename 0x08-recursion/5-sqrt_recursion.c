#include "main.h"

/**
 * sqrthelp - find the natural square root of a number
 *
 * @num: number to find the square root of
 * @root:
 *
 * Return: if n does not have a natural square root, return -1.
 */
int sqrthelp(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (sqrthelp(num, root + 1));
}

/**
 *  _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to be used
 *
 * Return: If n does not have a natural square root, return -1.
 *
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (sqrthelp(n, root));
}
