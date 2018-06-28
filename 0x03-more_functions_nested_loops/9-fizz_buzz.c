#include <stdio.h>

/**
 * main - print 1 to 100 with substitution on certain numbers
 * Return: always 0
 */

int main(void)
{
	int x, mod3, mod5;

	for (x = 1; x < 101; x++)
	{
		mod3 = x % 3;
		mod5 = x % 5;
		if (mod3 == 0 || mod5 == 0)
		{
			if (mod3 == 0 && mod5 == 0)
				printf("FizzBuzz ");
			else if (mod3 == 0)
				printf("Fizz ");
			else
				printf("Buzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
	return (0);

}
