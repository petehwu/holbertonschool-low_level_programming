#include "holberton.h"
/**
 *print_binary - prints the binary representation of a number
 *@n: number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int digits = 0;

	if (!n)
	{
		_putchar('0');
	}
	else
	{
		temp = n;
		while (temp)
		{
			temp = temp >> 1;
			digits++;
		}
		digits--;
		temp = (n >> digits);
		while (digits >= 0)
		{
			if (temp & 1)
				_putchar('1');
			else
				_putchar('0');
			digits--;
			temp = n >> digits;
		}
	}

}
