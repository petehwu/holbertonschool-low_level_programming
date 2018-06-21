#include <stdio.h>

/**
 * main - print hexadecimal numbers
 * Return: always 0
 */

int main(void)
{
	int i;
	char a;

	a = '0';
	for (i = 0; i < 10; i++)
		putchar(a + i);
	a = 'a';
	for (i = 0; i < 6; i++)
		putchar(a + i);
	putchar('\n');
	return (0);
}
