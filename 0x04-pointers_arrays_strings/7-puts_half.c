#include "holberton.h"

/**
 * puts_half - prints last half of a string
 * @str: Input string to print
 */

void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;
	for (i = len / 2 ; i < len; i++)
	{
		if (len % 2 != 0)
			_putchar(str[i + 1]);
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}
