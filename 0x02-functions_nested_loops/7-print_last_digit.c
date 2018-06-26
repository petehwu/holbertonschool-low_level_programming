#include "holberton.h"

/**
 * _abs - return absolute value
 * @i: input integer value
 * Description: this function returns the absolute
 * value of the integer that is passed in
 * Return: the absolute value of the integer that is passed in
 */
int _abs(int i)
{
	if (i < 0)
		i *= -1;
	return (i);
}

/**
 * print_last_digit - Return last digit of a number
 * @i: integer input which will to return only last didit
 * Description: takes an input and returns just the last
 * digit of the integer
 * Return: the last didgit of input value
 */

int print_last_digit(int i)
{

	i %= 10;
	i = _abs(i);
	_putchar('0' + i);
	return (i);
}
