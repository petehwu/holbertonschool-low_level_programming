#include "sort.h"

/**
 * counting_sort - implements counting sort
 * @array: array of integers >= 0 to sort
 * @size: number of elements in @array
 */
void counting_sort(int *array, size_t size)
{
	size_t i;
	int *counting, *output, maxval = 0, j;

	if (size < 2)
		return;
	output = make_int_array(size);
	if (!output)
		return;
	for (i = 0; i < size; i++)
	{
		if (array[i] > maxval)
			maxval =  array[i];
	}
	maxval++;
	counting = malloc(maxval * sizeof(int));
	counting = make_int_array(maxval);
	if (!counting)
	{
		free(output);
		return;
	}
	for (i = 0; i < size; i++)
		counting[array[i]] += 1;
	for (j = 1; j < maxval; j++)
		counting[j] += counting[j - 1];
	print_array(counting, maxval);
	for (i = 1; i <= size; i++)
	{
		output[counting[array[size - i]] - 1] = array[size - i];
		counting[array[size - i]] -= 1;
	}
	for (i = 0; i < size; i++)
		array[i] = output[i];
}

/**
 * make_int_array - creates an integer arry of the specified size and init
 * @size: size of array
 * Return: newly created array of null if fails
 */
int *make_int_array(size_t size)
{
	int *array;
	size_t i;

	array = malloc(size * sizeof(int));
	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = 0;

	return (array);
}



