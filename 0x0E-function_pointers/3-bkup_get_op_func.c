#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_op_func - wrapper function to call correct math operation functions
 * @s: math operation to perform
 * Return: result of operation
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

	while (i < (int) (sizeof(ops) / sizeof(*ops)) - 1)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
