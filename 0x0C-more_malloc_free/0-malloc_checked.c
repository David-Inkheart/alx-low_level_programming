#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 *
 * @b: size of memory
 *
 * Return: - Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{

	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
