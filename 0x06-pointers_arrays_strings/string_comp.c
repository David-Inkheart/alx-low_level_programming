#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
* _strncmp - a function that compares two strings.
* the function should work exactly like strcmp
*
*
* @s1: first string set
* @s2: string to be compared with
* @argc: integer representing the length of the string
* 
* Return: 0, if the s1 and s2 are equal;
* a negative value if s1 is less than s2;
* a positive value if s1 is greater than s2.
*/
int _strcmp(char *s1, char *s2);
{
	int res, int argc;

/**
 * argc is the number || count of arguments passed in the function
 * this includes the name of the program itself, so if two arguments
 * were passed on the command line, argc would have the value 3.
 */
	if (argc < 3)
	{
		fprintf(stderr, "Usage: %s <str1> <str2> [<len>]\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if (argc == 3)
		res = strcmp(argv[1], argv[2]);
	else
		res = strncmp(argv[1], argv[2], atoi(argv[3]));

	if (res == 0)
	{
		printf("<str1> and <str2> are equal");
		if (argc > 3)
			printf(" in the first %d bytes\n", atoi(argv[3]));
		printf("\n");
	}
	else if (res < 0)
	{
		printf("<str1> is less than <str2> (%d)\n", res);
	}
	else
	{
		printf("<str1> is greater than <str2> (%d)\n", res);
	}
	exit(EXIT_SUCCESS);
}
