#include <stdio.h>

/**
 * main - print lowercase letters
 * Return: Always 0
*/

int main(void)
{
	char a;
	int i;

	a = 'a';
	for (i = 0; i < 26; i++)
		putchar(a + i);
	a = 'A';
	for (i = 0; i < 26; i++)
		putchar(a + i);
	putchar('\n');
	return (0);
}
