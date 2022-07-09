#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a fuction to print multiples of 3 and 5
 *
 * Return : Always return 0 as success
 */

void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
			printf(" ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
	}
	printf("\n");
}
