#include "holberton.h"
/**
 * print_number - prints out an integer
 * @n: integer to print out
 *
 */

void print_number(int n)
{
	if (n / 10 != 0)
		print_number(n / 10);
	if (n / 10 == 0 && n < 0)
		_putchar('-');
	if (n < 0)
		_putchar(((n % 10) * -1) + '0');
	else
		_putchar((n % 10) + '0');
}
