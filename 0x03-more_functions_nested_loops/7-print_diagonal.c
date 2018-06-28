#include "holberton.h"

/**
 * print_diagonal - prints \ n number of times
 * @n: number of lines to print
 */

void print_diagonal(int n)
{
	int i = 0;
	int x;

	while (i < n)
	{
		for (x = 0; x < i; x++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
