#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t numnodes = 0;
	const dlistint_t *temp;

	if (!h)
		return (numnodes);
	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		numnodes++;
		temp = temp->next;
	}
	return (numnodes);
}
