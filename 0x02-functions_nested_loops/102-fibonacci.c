#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	int i;
	long int y;
	long int z;
	long int tot;

	y = 1;
	z = 2;
	printf("1, 2, ");
	for (i = 0; i < 48; i++)
	{
		tot = y + z;
		if (i == 47)
			printf("%ld", tot);
		else
			printf("%ld, ", tot);
		y = z;
		z = tot;
	}
	printf("\n");
	return (0);
}
