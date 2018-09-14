#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of the list
 * @head: pointer to pointer of first node in list
 * @n: number to be added
 * Return: address of new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (!temp)
	{
		printf("temp is null\n");
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = newnode;
		newnode->prev = temp;
	}
	return (newnode);
}
