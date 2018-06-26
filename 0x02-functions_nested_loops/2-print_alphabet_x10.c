#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j < 26 ; j++)
			_putchar('a' + j);
		_putchar('\n');
	}
}
