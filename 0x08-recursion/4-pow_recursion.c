#include "main.h"
#include <math.h>

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 *
 * @x: number to be powered up
 * @y: power
 *
 * Return: If y is lower than 0, return -1.
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

/*	if (y != 0) */
		return (x * _pow_recursion(x, y - 1));
/*	else */
/*		return (1); */
}
