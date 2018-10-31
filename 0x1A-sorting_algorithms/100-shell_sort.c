#include "sort.h"

/**
 * shell_sort - implementation of shell sort algorithm
 * @array:  array of integers to be sorted
 * @size: number of elements in @array
 */
void shell_sort(int *array, size_t size)
{
	size_t i, knuthval = 0, iter = 0;

	if (size > 1)
	{
		while (knuthval < size)
		{
			iter++;
			knuthval = (calc_pow(3, iter)  - 1) / 2;
		}
		while (iter >= 2)
		{
			iter--;
			knuthval = (calc_pow(3, iter) - 1) / 2;
			for (i = 0; i < knuthval; i++)
				shell_insertion_sort(array, size, i, knuthval);
			print_array(array, size);
		}
	}
}
/**
 * shell_insertion_sort - perform insert sort
 * @array: array to sort
 * @size: number of elements in array
 * @start: start index
 * @gap: gap value
 */
void shell_insertion_sort(int *array, size_t size, size_t start, size_t gap)
{
	size_t i, curpos;
	int temp, cur, next;

	for (i = start; i < (size - gap); i += gap)
	{
		cur = array[i];
		next = array[i+ gap];
		if (cur > next)
		{
			temp = next;
			array[i + gap] = cur;
			array[i] = temp;
			if (i > start && temp < array[i - gap])
			{
				curpos = i;
				i -= gap;
				while (i >= start && temp < array[i])
					i -= gap;
				/* do swap */
				i += gap;
				array[curpos] = array[i];
				array[i] = temp;
			}
		}
	}
}

/**
 * calc_pow  - calculates a value to the power
 * @val: value to use
 * @pow: raise to the power
 * @return: the value
 */
size_t calc_pow(size_t val, size_t pow)
{
	size_t i, t_val;

	if (pow == 0)
		return (1);
	for (i = 1; i <= pow; i++)
	{
		if (i == 1)
			t_val = val;
		else
			t_val *= val;
	}
	return (t_val);
}
	
