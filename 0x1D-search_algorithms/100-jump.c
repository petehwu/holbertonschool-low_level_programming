#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search implementation
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index position where found or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t js, idx = 0;
	int i;

	if (!array)
		return (-1);
	js = (size_t) sqrt(size);
	while (idx < size && array[idx] < value)
	{
		printf("Value checked array[%ld] = [%i]\n", idx, array[idx]);
		if (array[idx] > value)
		{
			break;
		}
		else
		{
			idx += js;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", idx - js, idx);
	i = js;
	while ((idx - i) < size)
	{
		printf("Value checked array[%ld] = [%i]\n", idx - i, array[idx - i]);
		if (value < array[idx - i])
		{
			return (-1);
		}
		else if (array[idx - i] == value)
		{
			return (idx - i);
		}
		else
		{
			i--;
		}
	}
	return (-1);
}
