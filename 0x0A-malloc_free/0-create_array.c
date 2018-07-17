#include <stdlib.h>
/**
 * create_array - create an array of char and initialize
 * @size: size of array to create
 * @c: character to initialize array with
 * Return: pointer to array created
 */

char *create_array(unsigned int size, char c)
{
	char *x;

	x = malloc(sizeof(char) * size);
	if (x == NULL || size == 0)
		return (NULL);
	while (size--)
		x[size] = c;

	return (x);
}
