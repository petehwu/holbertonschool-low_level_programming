#include "lists.h"

/**
 * get_dnodeint_at_index - returns value at the specified location
 * @head: pointer to first node in the list
 * @index: index position to get value for
 * Return: the node at index position  or NULL if index doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodeindex = 0;
	dlistint_t *temp = head;

	for (nodeindex = 0; temp && nodeindex < index; nodeindex++)
		temp = temp->next;
	if (!temp)
		return (NULL);
	else
		return (temp);

}
