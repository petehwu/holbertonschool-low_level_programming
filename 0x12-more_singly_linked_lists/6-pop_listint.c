#include "lists.h"
/**
 * pop_listint - deletes fist element in list and return its contend
 * @head: pointer to pointer of head of list
 * Return: value stored in first node of list
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int val = 0;

	if (*head)
	{
		new_head = (*head)->next;
		free(*head);
		val = (*head)->n;
		*head = new_head;
	}
	return (val);
}
