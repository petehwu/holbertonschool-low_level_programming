#include "holberton.h"
/**
 * clear_bit - sets bit value to 0 at given index
 * @n: number
 * @index: index position to set
 * Return: 1 if successful -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int digits = 0, i = 0;
	unsigned long int temp, temp2;

	temp = *n;
	if (!temp)
		return (0);
	while (temp)
	{
		temp = temp >> 1;
		digits++;
	}
	digits--;
	temp = 1;
	for (i = 0; i < digits; i++)
	{
		temp = (temp << 1) + 1;
	}
	temp2 = 1;
	for (i = 0; i < index; i++)
		temp2 = temp2 << 1;
	temp = temp ^ temp2;
	if (index > sizeof(long int) * 8)
		return (-1);
	*n = *n & temp;
	return (1);
}
