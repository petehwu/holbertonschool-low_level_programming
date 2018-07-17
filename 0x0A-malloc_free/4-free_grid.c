#include <stdlib.h>
/**
 * free_grid - free memory created by grid function
 * @grid: pointer to grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	if (grid && height)
	{
		while (--height > -1)
			free(*(grid + height));
		free(grid);
	}

}
