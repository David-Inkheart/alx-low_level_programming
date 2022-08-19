#include "main.h"
int countSetBits(int num);
/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to be shifted
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
/* Return count of set bits in n XOR m */
	return (countSetBits(n ^ m));
}

/**
 * countSetBits - Function that count set bits
 * @num: number of set bits
 *
 * Return: count of number of bits
 */

int countSetBits(int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num &= (num - 1);
	}
	return (count);
}
