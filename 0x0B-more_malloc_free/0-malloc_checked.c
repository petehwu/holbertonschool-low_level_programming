#include <stdlib.h>
/**
 * malloc_checked - allocates memory 
 * @b: size of memory to allocate
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit (98);
	else
		return (p);
}
