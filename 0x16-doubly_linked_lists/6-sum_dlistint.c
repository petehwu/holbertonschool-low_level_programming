#include "lists.h"

/**
 * sum_dlistint - sums all values in list
 * @head: pointer to head of the list
 * Return: the sum of all the values in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int tot = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		tot += temp->n;
		temp = temp->next;
	}
	return (tot);
}
