#include "holberton.h"
/**
 * print_sign - print sign of number
 * @n: input integer to check if positive or negative
 * Description: This function checks to see if a number
 * is positive or negative.
 * Return: 1 if > 0, 0 if 0, -1 if < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n ==  0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
