#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input number
 * @index: index
 * Return: the value of the bit at index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bit = 1 << index;

	if ((n & bit) == 0)
		return (0);

	return (1);
}
