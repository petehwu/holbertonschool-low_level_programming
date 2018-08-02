#include "lists.h"
/**
 * add_node_end - adds a new node to the end of a singly linked list
 * @head: pointer to pointer to head of list
 * @str: string to add
 * Return: pointer to head of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp_node;
	unsigned int str_len = 0;
	char *new_str;

	if (!str)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	new_str = strdup(str);
	if (!new_node || !new_str)
		return (NULL);
	while (*(str + str_len))
		str_len++;
	new_node->str = new_str;
	new_node->len = str_len;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		tmp_node = *head;
		while (tmp_node->next)
			tmp_node = tmp_node->next;
		tmp_node->next = new_node;
	}
	return (*head);

}
