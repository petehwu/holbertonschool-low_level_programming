#include "holberton.h"
/**
 * flip_bits - find number of bits need to flip to get value
 * @n: from number
 * @m: to number
 * Return: number of bits that needs to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, temp;
	int digits = 0, flipped = 0;


	diff = n ^ m;
	temp = diff;
	while (temp)
	{
		temp = temp >> 1;
		digits++;
	}
	digits--;
	while (digits >= 0)
	{
		if ((diff >> digits) & 1)
			flipped++;
		digits--;
	}
	return (flipped);




}
