#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: list search
 * @size: size of the list
 * @value: value to search for
 * Return: Index position if found or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (!array)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%i]\n", x, array[x]);
		if (value == array[x])
			return (x);
	}
	return (-1);
}
