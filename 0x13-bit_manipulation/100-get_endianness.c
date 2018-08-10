#include "holberton.h"
/**
 * get_endianness - finds if system is bie endian or little endian
 * Return: 0 if bi endian, 1 if little endian
 */
#include <stdio.h>
int get_endianness(void)
{
	int val = 0x00000050;
	char *c = (char *) &val;

	if (*c == 'P')
		return (1);
	else
		return (0);
	printf(" %c\n", c[0]);

	return (0);

}
