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
		if (a + i != 'e' && a + i != 'q')
		putchar(a + i);
	putchar('\n');
	return (0);
}
