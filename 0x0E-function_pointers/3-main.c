#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - main function
 * @argc: number of parameters
 * @argv: pointer to first parm
 * Return: 0
 */
int main(int argc, char **argv)
{
	int t, num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(*(argv + 1));
	op = *(argv + 2);
	num2 = atoi(*(argv + 3));
	if (strcmp(op, "+") && strcmp(op, "-") && strcmp(op, "*") && strcmp(op, "/") \
			&& strcmp(op, "%"))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	t = get_op_func(op)(num1, num2);
	printf("%d\n", t);
	return (0);
}

