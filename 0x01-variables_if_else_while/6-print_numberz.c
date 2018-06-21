#include <stdio.h>

/**
 * main - print numbers 0 to 9 using putchar
 * Return: always 0
 */

int main(void)
{
	int i;
	char a;

	a = '0';
	for (i = 0 ; i < 10 ; i++)
		putchar(a+i);
	putchar('\n');
	return (0);
}
