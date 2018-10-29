#include "sort.h"

/**
 * insertion_sort_list - performs an insertion sort on a linked list
 *
 * @list: pointer to pointer of linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t  *curnode = *list, *nextnode = NULL;

	if (!list || !*list || !(*list)->next)
		return;
	while (curnode)
	{
		nextnode = curnode->next;
		if (nextnode && curnode->n > nextnode->n)
		{
			curnode->next = nextnode->next;
			nextnode->prev = curnode->prev;
			nextnode->next = curnode;
			curnode->prev = nextnode;
			if (nextnode->prev)
				nextnode->prev->next = nextnode;
			else
				*list = nextnode;
			if (curnode->next)
				curnode->next->prev = curnode;
			print_list(*list);
			nextnode = nextnode->prev ? nextnode->prev : *list;
		}
		curnode = nextnode;
	}
}
