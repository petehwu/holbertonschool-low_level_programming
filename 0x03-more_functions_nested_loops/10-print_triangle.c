#include "holberton.h"

/**
 * print_triangle - draw a right justified triangle
 * @size: size of triangle to draw
 */

void print_triangle(int size)
{
	int y, s, c;

	for (y = 1; y <= size; y++)
	{
		for (s = 0; s < size - y; s++)
			_putchar(' ');
		for (c = 1; c <= y; c++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
