#include "holberton.h"

/**
 * print_number - display a number on stdout
 * @n: integer number to print
 */

void print_number(int n)
{
	int t;

	t = n;
	if (t < 0 && t / 10 == 0)
		_putchar(45);
	t /= 10;
	if (t != 0)
		print_number(t);

	if (n < 0)
		_putchar('0' + (n % 10) * -1);
	else
		_putchar('0' + (n % 10));
}
