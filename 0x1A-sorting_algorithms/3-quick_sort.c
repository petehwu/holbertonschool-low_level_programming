#include "sort.h"

/**
 * quick_sort - uses a quick sort algoithm to sort a list of integers
 * @array: array of integers to sort
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}


/**
 * qs - recursive function for quick sort
 * @array: array to sort
 * @start: starting search position in array
 * @end: end position for array
 * @size: number of elements in @array
 */
void qs(int *array, size_t start, size_t end, size_t size)
{
	size_t idx;

	/*
	 * printf("qs start: %ld\n", start);
	printf("qs end: %ld\n", end);
	*/
	/*
	 * do the sort
	 */
	idx = part(array, start, end, size);
	/*
	 * printf("qs idx %ld\n", idx);
	 */
	/*
	 * quicksort low side
	  */
	if (start < idx)
		qs(array, start, idx - 1, size);
	/*
	 * quicksort high side
	 */
	if (end > idx)
		qs(array, idx + 1, end, size);
}

/**
 * part - function to move all smaller digit to the left of pivot
 * @array: array to sort
 * @start: starting search position in array
 * @end: end position for array
 * @size: number of elements in @array
 * Return: index position for splitting array
 */
size_t part(int *array, size_t start, size_t end, size_t size)
{
	size_t pindex = start, x;
	int pivotVal = array[end];

	for (x = start; x < end; x++)
	{
		if (array[x] < pivotVal)
		{
			swapper(array, pindex, x, size);
			pindex++;
		}
	}
	swapper(array, pindex, x, size);
	return (pindex);
}

/**
 * swapper - function to swap values from 2 positions in array
 * @array: array to swap values in
 * @from: index position to swap from
 * @to: index position to swap to
 * @size: number of elements in @array
 */
void swapper(int *array, size_t from, size_t to, size_t size)
{
	int tempval;

	if (from != to)
	{
		tempval = array[from];
		array[from] = array[to];
		array[to] = tempval;
		print_array(array, size);
	}
}
