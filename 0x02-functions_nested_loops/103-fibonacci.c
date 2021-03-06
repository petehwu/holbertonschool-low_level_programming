#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	long int y;
	long int z;
	long int x;
	long int tot;

	y = 1;
	z = 2;
	x = 2;
	while (y + z < 4000000)
	{
		tot = y + z;
		if (tot % 2 == 0)
			x += tot;
		y = z;
		z = tot;
	}
	printf("%ld\n", x);
	return (0);
}
