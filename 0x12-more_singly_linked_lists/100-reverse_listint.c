#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to a pointer to head of list
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h1, *h2;

	if (!(*head))
		return (NULL);
	h1 = (*head)->next;
	if (!h1)
		return (*head);
	h2 = h1->next;
	(*head)->next = NULL;
	h1->next = *head;
	*head = h1;
	while (h2)
	{
		h1 = h2;
		h2 = h2->next;
		h1->next = *head;
		*head = h1;
	}
	return (*head);
}
