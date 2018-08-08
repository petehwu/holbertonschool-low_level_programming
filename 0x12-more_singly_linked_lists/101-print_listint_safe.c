#include "lists.h"
/**
 * free_list - frees memory for list
 * @head: pointer to head of list
 */
void free_list(list_t *head)
{
	if (head)
	{
		if (head->next)
			free_list(head->next);
		free(head);
	}
}

/**
 * add_node - adds a new node to head of list
 * @head: pointer to pointer of head of node
 * @curr: pointer to current node
 * Return: list with new node added
 */
list_t *add_node(list_t **head, const listint_t *curr)
{
	list_t *tmp_node;

	tmp_node = malloc(sizeof(list_t));
	if (!tmp_node)
		return (NULL);
	tmp_node->curr = curr;
	tmp_node->next = *head;
	*head = tmp_node;
	return (*head);

}

/**
 * find_node - looks through a list and see if address already exist
 * @head: head of list
 * @addr: address to look for in list
 * Return: 1 if found, 0 otherwise
 */
int find_node(const list_t *head, const listint_t *addr)
{
	const list_t *tempnode;

	if (head)
	{
		tempnode = head;
		while (tempnode)
		{
			if (tempnode->curr == addr)
				return (1);
			tempnode = tempnode->next;
		}
	}
	return (0);
}


/**
 * print_listint_safe - prints a list allowing loops
 * @head: pointer to head of list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	list_t *newlist = NULL;
	const listint_t *tempnode;


	if (head)
	{
		tempnode = head;
		newlist = NULL;
		while (tempnode)
		{
			if (!find_node(newlist, tempnode))
			{
				if (!add_node(&newlist, tempnode))
				{
					free_list(newlist);
					exit(98);
				}
				printf("[%p] %d\n", (void *) tempnode, tempnode->n);
				node_count++;
			}
			else
			{
				printf("-> [%p] %d\n", (void *) tempnode, tempnode->n);
				break;
			}
			tempnode = tempnode->next;
		}
		free_list(newlist);
		newlist = NULL;
	}
	return (node_count);
}
