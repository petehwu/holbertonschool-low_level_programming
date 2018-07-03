#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to reverse print
 */
void print_rev(char *s)
{
	int x = 0, y;

	while (s[x] != '\0')
		x++
	for (y = x ; y >= 0; y--)
		_putchar(s[y]);
	_putchar('\n');
}
