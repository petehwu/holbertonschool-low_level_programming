#include <stdio.h>
/**
 * main - prints out number of parms passed in
 * @argc: number of parameters
 * @argv: pointer to first parameter
 * Return: always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
