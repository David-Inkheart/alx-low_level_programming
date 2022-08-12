#include <stdio.h>

/**
 * before_main - function to print before main function
 * Apply the constructor attribute to my function and declare the
 * prototype so that it is executed before main()
 */
void before_main(void) __attribute__ ((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
