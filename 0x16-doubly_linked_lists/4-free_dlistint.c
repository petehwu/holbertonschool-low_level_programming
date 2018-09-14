#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: pointer to first node on list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head)
	{
		while (head->next)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
		free(head);
	}
}
