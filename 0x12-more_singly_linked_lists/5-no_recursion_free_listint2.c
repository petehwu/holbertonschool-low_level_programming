#include "lists.h"
/**
 * free_listint2 - frees memory for list by setting head to null
 * @head: pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_node;

	if (head && *head)
	{
		tmp_node = (*head)->next;
		while (*head)
		{
			free(*head);
			*head = NULL;
			*head = tmp_node;
			if (*head)
				tmp_node = (*head)->next;
		}
	}

}
