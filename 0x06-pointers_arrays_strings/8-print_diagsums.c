#include <stdio.h>
/**
 * print_diagsums - print sum of diagonals in square matrix
 * @a: pointer to array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int row, sum1 = 0, sum2 = 0;

	for (row = 0; row < size; row++)
	{
		sum1 = sum1 + a[(row * size) + row];
		sum2 = sum2 + a[(row + 1) * size - row - 1];
	}
	printf("%i, %i\n", sum1, sum2);
}
