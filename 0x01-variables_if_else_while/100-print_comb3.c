#include <stdio.h>

/**
 * main - print 0 through 9 using putchar without using char
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;
	int offset;

	offset = 0;
	for (i = 48; i < 58; i++)
	{
		j = i + offset;
		for (; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
		offset = 1;
	}
	putchar('\n');
	return (0);
}
