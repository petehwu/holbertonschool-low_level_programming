#include <stdlib.h>
/**
 * alloc_grid - returns pointer to a 2D array of integer
 * @width: width of array
 * @height: height of array
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **rows, *cols;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	rows = malloc(sizeof(int *) * height);
	if (!rows)
		return (NULL);
	cols = malloc(sizeof(int) * (height * width));
	if (!cols)
		return (NULL);
	for (j = 0; j < (height * width);j++)
		cols[j] = 0;
	for (i = 0; i < height; i++)
	{
		*(rows + i) = (cols + (i * width));;	
	}
	return (rows);
}
