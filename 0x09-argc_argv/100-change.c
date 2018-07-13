#include <stdio.h>
#include <stdlib.h>
/**
 * is_numeric - determines if parameter is all numeric
 * @s: pointer to first character in string
 * Return: 1 if numeric, 0 otherwise
 */
int is_not_numeric(char *s)
{
	while (*s)
	{
		if (*s - '0' < 0 || *s - '0' > 9)
			return (1);
		s++;
	}
	return (0);
}
/** 
 * main - given some cents, return minmum number of
 *         coins required
 * @argc: number of parameters
 * @argv: cents given
 * Return: 1 if invalid parms, otherwie 0
 */

int main (int argc, char *argv[])
{
	int c[4] = {25, 10, 5, 2};
	int totcoins = 0, i;
	int coins = 0, tot;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (*argv[1] == '-')
	{
		printf("0\n");
	}
	else
	{
		if (is_not_numeric(argv[1]))
		{
			printf("Error, Input Not numeric\n");
			return (1);
		}
		tot = atoi(argv[1]);
		for (i = 0; i < 4 && tot > 0; i++)
		{
			coins = tot / c[i];
			tot = tot - (c[i] * coins);
			totcoins += coins;
		}
		while (tot--)
			totcoins++;
			
		printf("%d\n", totcoins);
	}
	return (0);
		
}
