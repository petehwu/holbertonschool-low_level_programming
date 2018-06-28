#include "holberton.h"

/**
 * more_numbers - print 0 to 14 10 times
 *
 */

void more_numbers(void)
{
	int y, x;

	for (y = 0; y < 10 ; y++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x < 10)
			{
				_putchar('0' + x);
			}
			else
			{
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
			}
		}
		_putchar('\n');
	}
}
