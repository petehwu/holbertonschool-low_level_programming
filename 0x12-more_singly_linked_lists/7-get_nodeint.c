#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of list of integers
 * @head: pointer to head of list
 * @index: element to get
 * Return: listint_t object of nth element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tgt_node = NULL;
	unsigned int i;

	if (head)
	{
		tgt_node = head;
		for (i = 0; i < index; i++)
		{
			if (tgt_node)
				tgt_node = tgt_node->next;
		}
	}
	return (tgt_node);

}
