#include <stdio.h>
/**
 * main - print sum of numbers below 1024 divisible by 3 or 5
 * Return: always 0
 */

int main(void)
{
	int t;
	int f;
	int r;
	int num;

	r = 0;
	for (t = 1; t <= 341; t++)
	{
		num = t * 3;
		if (num % 5 != 0)
			r += num;
	}
	for (f = 1; f <= 204; f++)
		r = r + (f * 5);

	printf("%d\n", r);
	return (0);

}
