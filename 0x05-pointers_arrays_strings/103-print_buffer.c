#include <stdio.h>
/**
 * print_buffer - prints out the buffer
 * @b: pointer to buffer
 * @size: number of bytes to print
 */

void print_buffer(char *b, int size)
{
	int i = 0, j = 0, k = 0;
	unsigned char tempstr[11];
	unsigned char c;

	if (size <= 0)
		printf("\n");
	while (i < size)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
			{
				c = *(b + i + j);
				printf("%02x", c);
			}
			else
			{
				printf("  ");
			}
			if (j % 2 != 0)
				printf(" ");
		}
		for (k = 0; k < 10; k++)
		{
			if ((i + k) < size)
			{
				c = *(b + i + k);
				if (c < 32 || c > 126)
					c = '.';
				tempstr[k] = c;
			}
			else
			{
				tempstr[k] = '\0';
				break;
			}
		}
		if (k == 10)
			tempstr[10] = '\0';
		printf("%s\n", tempstr);
		i += 10;
	}
}
