#include "holberton.h"
/**
 * set_bit - sets bit value to 1 at given index
 * @n: number
 * @index: index position to set
 * Return: 1 if successful -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index > sizeof(long int) * 8)
		return (-1);
	temp = 1 << index;
	*n = *n | temp;
	return (1);
}
