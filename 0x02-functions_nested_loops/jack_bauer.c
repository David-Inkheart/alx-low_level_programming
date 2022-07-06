#include "main.h"
/**
 * main - Entry point
 * h = hour, m = minutes
 *
 *
 * Return: 24 hour clock line by line
 */
int main(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
{
	for (m = 0; m < 60; m++)
	{
	_putchar((h / 10) + '0');
	_putchar((h % 10) + '0');
	_putchar(':');
	_putchar((m / 10) + '0');
	_putchar((m % 10) + '0');
	_putchar('\n');
	}
}
}
