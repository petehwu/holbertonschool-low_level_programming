#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to pointer to head of list
 * @index: index position in list to delete
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!temp)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			if (temp)
				temp = temp->next;
		}
		if (!temp)
			return (-1);
		if (temp->prev)
			(temp->prev)->next = temp->next;
		if (temp->next)
			(temp->next)->prev = temp->prev;
		if (!index)
			*head = temp->next;
		free(temp);
		return (1);
	}

}
