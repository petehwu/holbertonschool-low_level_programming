#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at nth position specified
 * @head: pointer to pointer of head of node
 * @idx: position to insert new value
 * @n: number to insert to list
 * Return: pointer to pointer of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *prev_node = NULL, *next_node = NULL;

	if (*head)
		next_node = *head;
	while (counter < idx && next_node)
	{
		prev_node = next_node;
		if (next_node)
			next_node = next_node->next;
		counter++;
	}
	if ((!prev_node && idx) || !new_node || (counter != idx))
	{
		if (new_node)
			free(new_node);
		return (NULL);

	}
	else
	{
		new_node->n = n;
		new_node->next = next_node;
		if (prev_node)
			prev_node->next = new_node;
		else
			*head = new_node;
	}
	return (*head);
}

