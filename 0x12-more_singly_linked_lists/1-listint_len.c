#include "lists.h"
/**
 * listint_len - counts number of nodes in integer list
 * @h: list of inteers to count
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp_node;
	size_t num = 0;

	if (!h)
		return (0);
	tmp_node = h;
	while (tmp_node)
	{
		num++;
		tmp_node = tmp_node->next;
	}
	return (num);
}
