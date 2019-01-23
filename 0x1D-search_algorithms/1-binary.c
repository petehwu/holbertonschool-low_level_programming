#include "search_algos.h"
/**
 * binary_helper - main algorithm for binary search
 * @array: array to search
 * @low: lower bound of array
 * @up: upper bound of array
 * @value: value to search for
 * Return: index position where found or -1 if not found
 */
int binary_helper(int *array, size_t low, size_t up, int value)
{
	size_t mid, i = low;

	printf("Searching in array: ");
	for (i = low; i < up; i++)
		printf("%i, ", array[i]);
	printf("%i\n", array[i]);
	if (low == up && array[low] != value)
		return (-1);
	else if (array[low] == value)
	{
		return (low);
	}
	else
	{
		mid = (low + up) / 2;
		if (array[mid] > value)
		{
			return (binary_helper(array, low, mid - 1, value));
		}
		else if (array[mid] < value)
		{
			return (binary_helper(array, mid + 1, up, value));
		}
		else
			return (mid);

	}

}
/**
 * binary_search - binary search algorithm
 * @array:  array to search
 * @size: size of array
 * @value: value to search for
 * Return: index position where found or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	return (binary_helper(array, 0, size - 1, value));
}
