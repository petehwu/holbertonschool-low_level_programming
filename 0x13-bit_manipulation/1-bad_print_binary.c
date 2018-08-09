#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int val = 1;
	int shift = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (n >= val)
		{
			val = val << 1;
			shift += 1;
		}
		val = val >> 1;

		while (shift)
		{
			if (n >=  val)
			{
				_putchar ('1');
				n = n - val;
			}
			else
			{
				_putchar ('0');
			}
			val = val >> 1;
			shift--;
		}
	}

}
