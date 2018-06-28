#include "holberton.h"

/**
 * print_line - print _ character n times
 * @n: number of times to print _
 *
 */

void print_line(int n)
{
	int c = 0;

	while (c < n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
