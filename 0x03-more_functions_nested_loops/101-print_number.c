#include "holberton.h"

/**
 * print_number - display a number on stdout
 * @n: integer number to print
 */

void print_number(int n)
{
	int x = 10;
	int t;

	t = n;
	if (t < 0 && t / x == 0)
		_putchar('-');
	t /= x;
	if (t != 0)
		print_number(t);

	if (n < 0)
		_putchar('0' + (n % x) * -1);
	else
		_putchar('0' + (n % x));
}
