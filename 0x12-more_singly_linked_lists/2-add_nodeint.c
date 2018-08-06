#include "lists.h"
/**
 * add_nodeint - adds a new node to head of list of integers
 * @head: pointer to pointer of head of node
 * @n: number to add to list
 * Return: list of integers with new node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp_node;

	tmp_node = malloc(sizeof(listint_t));
	if (!tmp_node)
		return (NULL);
	tmp_node->n = n;
	tmp_node->next = *head;
	*head = tmp_node;
	return (*head);

}
