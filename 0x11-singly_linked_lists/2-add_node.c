#include "lists.h"
/**
 * add_node - adds a node to the beginning of a singly linked list
 * @head: Pointer of pointer to the head of list
 * @str: element to add
 * Return: pointer to the linked list
 */
#include <stdio.h>
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp_node;
	char *tmp_str;
	unsigned int  str_len = 0;

	tmp_str = strdup(str);
	tmp_node = malloc(sizeof(list_t));
	if (!tmp_node)
		return (NULL);
	if (!tmp_str)
	{
		tmp_node->str = NULL;
		tmp_node->len = 0;
	}
	else
	{
		while (*(str + str_len))
			str_len++;
		if (!str_len)
			tmp_node->str = NULL;
		else
			tmp_node->str = tmp_str;
		tmp_node->len = str_len;
	}
	tmp_node->next = *head;
	*head = tmp_node;
	return (*head);
}
