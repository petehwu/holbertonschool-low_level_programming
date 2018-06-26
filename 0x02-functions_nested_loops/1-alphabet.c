#include "holberton.h"
/**
 * print_alphabet - print alphabet in lowercase
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 0 ; i < 26; i++)
		_putchar('a' + i);
	_putchar('\n');	
}
