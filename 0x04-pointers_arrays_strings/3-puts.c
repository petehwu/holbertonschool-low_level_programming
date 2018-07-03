#include "holberton.h"
/**
 * _puts - prints a string to stdout followed by newline
 *@str: input string to print to stdout
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
