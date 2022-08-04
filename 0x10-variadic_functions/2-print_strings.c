#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @separator: character string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: - nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if ((separator != NULL) && (i != (n - 1)))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
