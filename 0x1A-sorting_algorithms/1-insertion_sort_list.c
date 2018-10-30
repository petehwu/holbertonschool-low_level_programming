#include "sort.h"

/**
 * insertion_sort_list - performs an insertion sort on a linked list
 *
 * @list: pointer to pointer of linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t  *curnode, *nextnode = NULL;

	if (!list || !*list || !(*list)->next)
		return;
	curnode = *list;
	while (curnode->next)
	{
		nextnode = curnode->next;
		if (curnode->n > nextnode->n)
		{
			insertion_sort_swapper(list, curnode, nextnode);
			while (nextnode->prev && nextnode->prev->n > nextnode->n)
				insertion_sort_swapper(list,  nextnode->prev, nextnode);
			nextnode = curnode;
		}
		curnode = nextnode;
	}
}

/**
 * insertion_sort_swapper - swaps two nodes in a linked list
 * @list: pointer to pointer of linked list
 * @from: pointer to swap from
 * @to: pointer to swap to
 */
void insertion_sort_swapper(listint_t **list, listint_t *from, listint_t *to)
{
	to->prev = from->prev;
	from->next = to->next;
	to->next = from;
	from->prev = to;
	if (from->next)
		from->next->prev = from;
	if (to->prev)
		to->prev->next = to;
	else
		*list = to;
	print_list(*list);
}
