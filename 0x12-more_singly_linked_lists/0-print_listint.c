#include "lists.h"
/**
 * print_listint - prints all elements of integer list
 * @h: list of integers to print
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp_node;
	size_t count = 0;

	if (!h)
		return (0);
	tmp_node =  h;
	while (tmp_node)
	{
		printf("%d\n", tmp_node->n);
		tmp_node = tmp_node->next;
		count++;
	}
	return (count);
}

