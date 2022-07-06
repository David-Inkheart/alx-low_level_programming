#include "main.h"
/**
 * _islower - checks for lowercase character c
 * Description: 'int c - a random letter from 'a' to 'z''
 * Return: Always 0 (Success)
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	return (1);
	return (0);
}
