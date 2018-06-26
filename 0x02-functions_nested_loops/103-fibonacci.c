#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	long int y;
	long int z;
	long int tot;

	y = 2;
	z = 8;
	printf("2, 8, ");
	while (y + z < 4000000)
	{
		tot = y + z;
		y = z;
		z = tot;
		if (y + z >= 4000000)
			printf("%ld", tot);
		else
			printf("%ld, ", tot);
	}
	printf("\n");
	return (0);
}
