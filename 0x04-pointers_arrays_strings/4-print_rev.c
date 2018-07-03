#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to reverse print
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	x--;
	for ( ; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
