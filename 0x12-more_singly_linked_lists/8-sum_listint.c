#include "lists.h"
/**
 * sum_listint - calculates sum of all elements in list of integers
 * @head: pointer to head of list
 * Return: sum of all elements in list
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp_node;
	int sum = 0;

	if (head)
	{
		tmp_node = head;
		while (tmp_node)
		{
			sum += tmp_node->n;
			tmp_node = tmp_node->next;
		}
	}
	return (sum);

}
