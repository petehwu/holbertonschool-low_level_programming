#include "lists.h"
/**
 * list_len - returns number of elements in a list
 * @h: list to find elements form
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t ele_cnt = 0;

	if (!h)
		return (0);
	while (h)
	{
		ele_cnt++;
		h = h->next;
	}
	return (ele_cnt);
}
