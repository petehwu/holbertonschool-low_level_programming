#include <stdio.h>

/**
 * main - print numbers 0 to 9 using putchar
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
