#include "lists.h"
/**
 * free_listint - frees memory for list of integers
 * @head: pointer to head of list
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		if (head->next)
			free_listint(head->next);
		free(head);
	}
}


