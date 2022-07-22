#include "main.h"

/**
 * divhelper - Checks if a number is divisible
 *
 * @num: number to br checked
 * @divisor: number to use for checking
 *
 * Return: if the number is divisible - 0.
 *		If the number is not divisible - 1.
 */
int divhelper(int num, int divisor)
{
	if (num % divisor == 0)
		return (0);

	if (divisor == num / 2)
		return (1);

	return (divhelper(num, divisor + 1));
}

/**
 * is_prime_number - tells if the input integer is a prime number
 *
 * @n: input integer.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 *
 */

int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divhelper(n, divisor));
}
