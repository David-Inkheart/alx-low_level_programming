#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @separator: character string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: - nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	putchar ('\n');
	va_end(ap);
}
