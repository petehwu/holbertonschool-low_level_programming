#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: number of parameters input
 * @argv: pointer to first parameter
 * Return: 1 if 2 parameters, 0 if less than 2 params
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(*(argv + 2)));
		return (0);
	}
}
