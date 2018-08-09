#include "holberton.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to binary representation of number
 * Return: converted integer or 0 if invalid string
 */
unsigned int binary_to_uint(const char *b)
{
	int digits = 0, index = 0;
	unsigned int sum = 0;

	if (!b)
		return (0);

	while (b && *b == '0')
		b++;
	while (b[digits])
	{
		if (b[digits] != '0' && b[digits] != '1')
			return (0);
		digits++;
	}
	while (digits)
	{
		if (b[index] == '1')
			sum += get_val(digits);
		digits--;
		index++;

	}
	return (sum);
}
/**
 * get_val - gets integer value based on binary position
 * @digits: index position of value
 * Return: numeric value
 */

unsigned int get_val(int digits)
{
	unsigned int val = 1;
	int i = 2;

	while (i <= digits)
	{
		val *= 2;
		i++;
	}
	return (val);
}
