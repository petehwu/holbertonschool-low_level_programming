#include "holberton.h"
/**
 * clear_bit - sets bit value to 0 at given index
 * @n: number
 * @index: index position to set
 * Return: 1 if successful -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	temp = *n;
	if (!*n)
		return (0);
	temp =  ~(1 << index);
	if (index > sizeof(long int) * 8)
		return (-1);
	*n = *n & temp;
	return (1);
}
