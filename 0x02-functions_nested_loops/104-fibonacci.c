#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	int i;
	long double y;
	long double z;
	long double tot;

	y = 1;
	z = 2;
	printf("1, 2, ");
	for (i = 0; i < 95; i++)
	{
		tot = y + z;
		if (i == 94)
			printf("%.0Lf", tot);
		else
			printf("%.0Lf, ", tot);
		y = z;
		z = tot;
	}
	printf("\n");
	return (0);
}
