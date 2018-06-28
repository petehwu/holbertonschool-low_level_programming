#include "holberton.h"

/**
 * print_number - display a number on stdout
 * @n: integer number to print
 */

void print_number(int n)
{
	if (n < 0 && n / 10 == 0)
		_putchar('-');
	if (n / 10 != 0)
		print_number(n / 10);
	if (n < 0)
		_putchar('0' + ((n % 10) * -1));
	else
		_putchar('0' + (n % 10));
}
