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
	int tot = 0, i = 0;
	char *p;

	while (--argc)
	{
		p = *(++argv);
		for (i = 0; *(p + i); i++)
		{
			if (p[i] != '-' && (p[i] - '0' < 0 || p[i] - '0' > 9))
			{
				printf("Error\n");
				return (1);
			}
		}
		tot += atoi(p);
	}
	printf("%d\n", tot);
}
