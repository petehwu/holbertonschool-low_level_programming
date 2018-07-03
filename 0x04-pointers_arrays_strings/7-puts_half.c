#include "holberton.h"
/**
 * puts_half - prints last half of a string
 * @str: Input string to print
 */

void puts_half(char *str)
{
	int len = 0, i, odd = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 != 0)
		odd = 1;
	len /= 2;
	if (len >= 1)
	{
		for (i = 0 ; i < len; i++)
		{
			if (odd != 0)
				_putchar(str[i + len + 1]);
			else
				_putchar(str[i + len]);
		}
	}
	_putchar('\n');
}
