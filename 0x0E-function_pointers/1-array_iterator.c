#include <stdlib.h>
/**
 * array_iterator - iterates through an array and performing tasks
 * @array:  pointer to array
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size && array && action)
	{
		action(*(array + i));
		i++;
	}
}
