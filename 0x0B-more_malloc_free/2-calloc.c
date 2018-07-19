#include <stdlib.h>
/**
 * _memset - sets memory for certain bytes to 9
 * @p: beginning address
 * @size: size of bytes to set
 */
void _memset(char *p, unsigned int size)
{
	while (size--)
		*p++ = 0;
}
/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements
 * @size: number of bytes per element
 * Return: Pointer to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int totsize;

	if (!nmemb || !size)
		return (NULL);
	totsize = nmemb * size;
	ptr = malloc(totsize);
	if (!ptr)
		return (NULL);
	_memset(ptr, totsize);
	return (ptr);
}
