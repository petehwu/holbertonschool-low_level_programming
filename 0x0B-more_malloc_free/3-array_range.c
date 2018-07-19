#include <stdlib.h>
/*
 * array_range - creates array of integers
 * @min: smallest value
 * @max: largest value
 * Return: pointer to array created
 */
int *array_range(int min, int max)
{
	unsigned int numval = 0, j;
	int *np;

	if (min > max)
		return (NULL);
	while (max >= min)
	{
		numval++;
		max--;
	}
	np = malloc(numval * sizeof(int));
	if (!np)
		return (NULL);
	for (j = 0; j < numval; j++)
		*(np + j) = (min + j);
	return (np);


}
