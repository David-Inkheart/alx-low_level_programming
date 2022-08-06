#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - returns a pointer to the function that corresponds
 * to the operator given as a parameter. Example: get_op_func("+")
 * should return a pointer to the function op_add
 * @s: a character pointer pointing to the symbol
 *
 * Return: an int pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
