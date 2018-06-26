#include <stdio.h>

/**
 * print_to_98 - function to print number for input n to 98
 * @n: starting point to print to 98
 *
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n -= 1;
		else
			n += 1;
	}
	printf("98\n");
}
