#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 * Return: always 0
 */

int main(void)
{
	int i;
	char a;

	a = 'z';
	for (i = 0; i < 26 ; i++)
		putchar(a - i);
	putchar('\n');
	return (0);
}
