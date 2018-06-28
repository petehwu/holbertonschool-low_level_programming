#include "holberton.h"

/**
 * print_number - display a number on stdout
 * @n: integer number to print
 */

void print_number(int n)
{
	int v;

	if (n < 0 && n / 10 == 0)
	{
		v = 45;
		_putchar(v);
	}
	if (n / 10 != 0)
		print_number(n / 10);
	if (n < 0)
	{
		v = 48 + ((n % 10) * -1);
		_putchar(v);
	}
	else
	{
		v = 48 + (n % 10);
		_putchar(v);
	}
}
