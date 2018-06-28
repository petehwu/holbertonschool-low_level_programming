#include <stdio.h>
#include <math.h>

/**
 * main - find largest prime factor of 612852475143
 * Return: always 0
 */

int main(void)
{
	long maxfact = 2;
	long val = 612852475143;
	int i;

	while (val % 2 == 0)
	{
		val /= 2;
	}
	for (i = 3; i <= sqrt(val); i += 2)
	{
		while (val % i == 0)
		{
			maxfact = i;
			val /= i;
		}
	}
	if (val > 2)
		maxfact = val;
	printf("%ld\n", maxfact);
	return (0);
}
