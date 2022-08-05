#include "variadic_functions.h"
/**
 * print_all - function for me to learn switch-case
 *@format: a set of integers to choose from
 * Return: - nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0, num = 0;
	char *sep = ", ";

	va_start(args, format);
	while (format && format[i])
		i++;

	while (format && format[num])
	{
		if (num == (i - 1))
			sep = "";
		switch (format[num])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), sep);
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", str, sep);
				break;
		}
		num++;
	}
	printf("\n");
	va_end(args);
}
