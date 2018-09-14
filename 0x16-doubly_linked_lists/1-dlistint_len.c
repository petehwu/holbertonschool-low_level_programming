#include "lists.h"

/**
 * dlistint_len - returns the number of elements in linked list
 * @h: pointer to head of the list
 * Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numnodes = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		numnodes++;
		temp = temp->next;
	}
	return (numnodes);

}
