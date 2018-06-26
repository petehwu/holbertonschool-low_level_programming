#include "holberton.h"

/**
 * jack_bauer - function to print out 24 hours in minutes
 *
 */

void jack_bauer(void)
{
	int m;
	int h;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}
