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
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	rows = malloc(sizeof(int *) * height);
	if (!rows)
		return (NULL);
	cols = malloc(sizeof(int) * width * height);
	if (!cols)
	{
		free(rows);
		return (NULL);
	}
	for (i = 0; i < width * height; i++)
		*(cols + i) = 0;
	for (i = 0; i < height; i++)
			*(rows + i) = (cols + (width * i));
	return (rows);
}
