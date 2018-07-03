#include "holberton.h"
/**
 * puts2 - prints even numbered characters from string
 * @str: input string to print
 */
void puts2(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
		i++;
	if (i == 1)
		_putchar(str[0]);
	for (j = 0; j < i - 1; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
