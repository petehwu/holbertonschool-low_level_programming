#include "holberton.h"
/**
 * get_bit - returns bit value at given index
 * @n: number
 * @index: index position to get
 * Return: bit value at given position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int digits = 0, i = 0;
	unsigned long int temp;

	temp = n;
	while (temp)
	{
		temp = temp >> 1;
		digits++;
	}
	digits--;
	temp = n;
	if (index > sizeof(long int) * 8)
		return (-1);
	else if (index > digits)
		return (0);
	temp = temp >> index;
/*	for (i = 0 ; i < index; i++)
		temp = temp >> 1; */
	return (temp & 1);




}
