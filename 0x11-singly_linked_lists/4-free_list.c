#include "lists.h"
/**
 * free_list - free the list
 * @head: head of the lst
 */
void free_list(list_t *head)
{
	list_t *tmp_node;

	if (head)
	{
		while (head->next)
		{
			tmp_node = head->next;
			free(head->str);
			free(head);
			head = tmp_node;
		}
		free(head->str);
		free(head);
	}
}
