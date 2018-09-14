#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of the list
 * @head: pointer to pointer of head to a list
 * @n: new value to insert to node
 * Return: returns address to new node or NULL If failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	if (!*head)
	{
		newnode->next = NULL;
	}
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
	}
	*head = newnode;
	return (newnode);
}
