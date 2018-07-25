/**
 * int_index - searches for an integer in array
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to compare function
 * Return: -1 if no match or size <=0. Returns index where first found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (array && cmp && i < size)
	{
		if (cmp(*(array + i)))
			return (i);
		i++;
	}
	return (-1);
}
