#include <stdlib.h>
/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements
 * @size: number of bytes per element
 * Return: Pointer to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *tptr;
	unsigned int totsize;

	if (!nmemb || !size)
		return (NULL);
	totsize = nmemb * size;
	ptr = malloc(totsize);
	if (!ptr)
		return (NULL);
	tptr = ptr;
	while (totsize--)
		*tptr++ = 0;
	return (ptr);
}
