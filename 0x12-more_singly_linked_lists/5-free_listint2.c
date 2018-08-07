#include "lists.h"
/**
 * free_listint2 - frees memory for list by setting head to null
 * @head: pointer to head of list
 */
void free_listint2(listint_t **head)
{

	if ((*head)->next)
		free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;

}
