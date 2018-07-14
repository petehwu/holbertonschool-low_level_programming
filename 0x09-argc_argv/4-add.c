#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of parameters passed in
 * @argv: pointer to first parameter
 * Return: 0 if both are digits otherwise 1
 */

int main(int argc, char *argv[])
{
	int tot = 0, x = 0;

	while (--argc)
	{
		argv++;
		for (x = 0; *(*argv + x); x++)
		{
			if (*(*argv + x) - '0' < 0 || *(*argv + x) - '0' > 9)
			{
				printf("Error\n");
				return (1);
			}
		}
		tot += atoi(*argv);
	}
	printf("%d\n", tot);
	return (0);
}
