#include "holberton.h"
/**
 * _puts_recursion - prints a string recursively
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s)
		_puts_recursion(s + 1);
	else
		_putchar('\n');

}
