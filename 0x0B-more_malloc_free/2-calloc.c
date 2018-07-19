#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements
 * @size: number of bytes per element
 * Return: Pointer to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	memset(ptr, 0, (size * nmemb));
	return (ptr);
}
