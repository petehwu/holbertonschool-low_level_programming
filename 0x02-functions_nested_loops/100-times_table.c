#include "holberton.h"

/**
 * print_times_table - function to print the multiplcation table
 * @n: input paramter to print multiplication table for
 * Description: takes the input number and prints
 * multlipaction table if between 1 and 15
 */

void print_times_table(int n)
{
	int i;
	int j;
	int x;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				x = i * j;
				if (x >= 10 && x <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(x / 10 + '0');
					_putchar(x % 10 + '0');
				}
				else if (x >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(x / 100 + '0');
					_putchar(((x / 10) % 10)  + '0');
					_putchar(x % 10 + '0');
				}
				else if (x == 0 && j == 0)
				{
					_putchar('0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(x % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}

