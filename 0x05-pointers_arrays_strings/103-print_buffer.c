#include <stdio.h>
/**
 * print_buffer - prints out the buffer
 * @b: pointer to buffer
 * @size: number of bytes to print
 */

void print_buffer(char *b, int size)
{
	int i = 0, j = 0, k = 0;
	char tempstr[11];
	char c;

	if (size <= 0)
		printf("\n");
	while (i < size)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
				printf("%02x", *(b + i + j));
			else
				printf("  ");
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
			}
		}
		if (k == 11)
			tempstr[11] = '\0';
		printf("%s\n", tempstr);

		i += 10;
	}
}
