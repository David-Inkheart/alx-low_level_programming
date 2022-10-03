#include "3-calc.h"
#include <stdio.h>

/**
 * add - adds two integers
 * @a: int 1
 * @b: int 2
 * Return: sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - gives the difference of two integers
 * @a: int 1
 * @b: int 2
 * Return: the difference of a and b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies a and b
 * @a: arg 1
 * @b: arg 2
 * Return: returns the product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides a by b
 * @a: arg 1
 * @b: arg 2
 * Return: returns the result of the division of a by b
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return(-1);
	}
	return (a / b);
}

/**
 * mod - gives the remainder of a when divided by b
 * @a: arg 1
 * @b: arg 2
 * Return: returns the remainder of the division of a by b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return(-1);
	}
	return (a % b);
}
