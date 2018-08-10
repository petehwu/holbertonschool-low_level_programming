#include "holberton.h"
/**
 * get_bit - returns bit value at given index
 * @n: number
 * @index: index position to get
 * Return: bit value at given position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(long int) * 8)
		return (-1);
	n = n >> index;
	return (n & 1);
}
