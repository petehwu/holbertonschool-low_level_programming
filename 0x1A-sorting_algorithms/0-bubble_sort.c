#include "sort.h"

/**
 * bubble_sort - performs a bubble sort of an array
 *
 * @array: array to be sorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int sorted = 1, tempVal;

	do {
		sorted = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tempVal = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tempVal;
				sorted = 0;
				print_array(array, size);
			}
		}
	} while (!sorted);
}
