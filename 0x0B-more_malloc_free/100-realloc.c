#include <stdlib.h>
/**
 * _memcpy - copies bytes from old to new
 * @op: Source pointer
 * @np: Destination
 * @size: bytes to copy
 */
void _memcpy(char *op, char *np, unsigned int size)
{
	while (size--)
		*np++ = *op++;
}
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previously allocated memory
 * @old_size: size of old memory block
 * @new_size: size of new memory block
 * Return:  pointer to new memory location
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int size;
	void *newptr;

	if (old_size == new_size)
		return (ptr);
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	size = (old_size < new_size) ? old_size : new_size;
	if (!ptr)
	{
		newptr = malloc(new_size);
		if (!newptr)
			return (NULL);
		else
			return (newptr);
	}
	newptr = malloc(new_size);
	_memcpy(ptr, newptr, size);
	free(ptr);
	return (newptr);

}
