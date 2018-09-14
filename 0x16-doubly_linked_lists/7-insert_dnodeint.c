#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at specified index position
 * @h: pointer to pointer to head of the list
 * @idx: index position to insert the new node
 * @n: value for the new node
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newnode;
	unsigned int  i = 0;

	if (!idx)
	{
		return (add_dnodeint(h, n));
	}
	else
	{
		for (i = 0; i < (idx - 1); i++)
		{
			if (temp)
				temp = temp->next;
		}
		if (!temp)
			return (NULL);
		newnode = malloc(sizeof(dlistint_t));
		if (!newnode)
			return (NULL);
		newnode->n = n;
		newnode->next = temp->next;
		if (temp->next)
			(temp->next)->prev = newnode;
		newnode->prev = temp;
		temp->next = newnode;
		return (newnode);
	}
}
