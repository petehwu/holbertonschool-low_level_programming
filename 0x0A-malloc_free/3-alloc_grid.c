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
	for (i = 0; i < height; i++)
	{
		cols = malloc(sizeof(int) * width);
		if (!cols)
		{
			return (NULL);
		}
		else
		{
			*(rows + i) = cols;
			for (j = 0; j < width; j++)
				*(cols + j) = 0;
		}
	}
	return (rows);
}
