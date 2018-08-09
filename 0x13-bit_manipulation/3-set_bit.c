#include "holberton.h"
/**
 * set_bit - sets bit value to 1 at given index
 * @n: number
 * @index: index position to set
 * Return: 1 if successful -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int digits = 0;
	unsigned long int temp;

	temp = *n;
	while (temp)
	{
		temp = temp >> 1;
		digits++;
	}
	digits--;
	temp = 1;
	if (index > sizeof(long int) * 8)
		return (-1);
	temp = temp << index;
	/*
	* for (i = 0; i < index; i++)
	*	temp = temp << 1;
	*/
	*n = *n | temp;
	return (1);
}
