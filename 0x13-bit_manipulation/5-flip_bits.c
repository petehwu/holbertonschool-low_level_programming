#include "holberton.h"
/**
 * flip_bits - find number of bits need to flip to get value
 * @n: from number
 * @m: to number
 * Return: number of bits that needs to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int flipped = 0;


	diff = n ^ m;
	while (diff)
	{
		if (diff & 1)
			flipped++;
		diff = diff >> 1;
	}
	return (flipped);




}
