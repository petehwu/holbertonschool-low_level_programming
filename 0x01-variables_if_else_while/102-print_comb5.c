#include <stdio.h>

/**
 * main - print all combination of numbers from 00 to 99
 * Return: Always 0
 */

int main(void)
{
	int i;
	int j;
	int x;
	int y;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			i = x;
			j = y + 1;
			for (; i < 58; i++)
			{
				for (; j < 58; j++)
				{
					putchar(x);
					putchar(y);
					putchar(32);
					putchar(i);
					putchar(j);
					if (x != 57 || y != 56 || i != 57 || j != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
				j = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
