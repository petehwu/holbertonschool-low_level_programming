#include "holberton.h"

/**
 * print_number - display a number on stdout
 * @n: integer number to print
 */

void print_number(int n)
{
	int i = 0, j = 10, x, k;

	x = n;
	if (n < 0)
	_putchar('-');
	if (n > -10 && n < 10)
	{
		if (n < 0)
			_putchar('0' + (n % 10) * -1);
		else
			_putchar('0' + n % 10);
	}
	else
	{
		while (x / 10 >= 10 || x / 10 <= -10)
		{
			x /= 10;
			j *= 10;
			i++;
		}
		for (k = 0; k < i; k++)
		{
			if (n < 0)
				_putchar('0' + (n / j) * -1);
			else
				_putchar('0' + n / j);
			n %= j;
			j /= 10;
		}
		if (n < 0)
		{
			_putchar('0' + (n / 10) * -1);
			_putchar('0' + (n % 10) * -1);
		}
		else
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
	}


}
