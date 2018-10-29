#include "sort.h"

/**
 * selection_sort - performs a selection sort on a list
 * @arrary:  array of integers to sort
 * @size: number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t sorted, unsorted, index;
	int val;

	for (sorted = 0; sorted < size; sorted++)
	{
		val = array[sorted];
		index = sorted;
		for (unsorted = sorted; unsorted < size; unsorted++)
		{
			if (val > array[unsorted])
			{
				index = unsorted;
				val = array[unsorted];
			}
		}
		if (val != array[sorted])
		{
			array[index] = array[sorted];
			array[sorted] = val;
			print_array(array, size);
		}
	}
}
