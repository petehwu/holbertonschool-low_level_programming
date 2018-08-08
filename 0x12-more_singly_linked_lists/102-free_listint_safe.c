#include "lists.h"
/**
 * free_list2 - frees memory for list
 * @head: pointer to head of list
 */
void free_list2(list_t *head)
{
	if (head)
	{
		if (head->next)
			free_list(head->next);
		free(head);
	}
}

/**
 * add_node2 - adds a new node to head of list
 * @head: pointer to pointer of head of node
 * @curr: pointer to current node
 * Return: list with new node added
 */
list_t *add_node2(list_t **head, listint_t *curr)
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
 * find_node2 - looks through a list and see if address already exist
 * @head: head of list
 * @addr: address to look for in list
 * Return: 1 if found, 0 otherwise
 */
int find_node2(list_t *head, listint_t *addr)
{
	 list_t *tempnode;

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
 * free_listint_safe - frees a list allowing loops
 * @h: pointer to pointer of head of list
 * Return: number of nodes in list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	list_t *newlist = NULL;
	 listint_t *tempnode, *tempnode2;


	if (h && *h)
	{
		tempnode = *h;
		newlist = NULL;
		while (tempnode)
		{
			if (!find_node2(newlist, tempnode))
			{
				if (!add_node2(&newlist, tempnode))
				{
					free_list2(newlist);
					exit(98);
				}
				tempnode2 = tempnode->next;
				free(tempnode);
				tempnode = NULL;
				node_count++;
			}
			else
			{
				tempnode = NULL;
				break;
			}
			tempnode = tempnode2;
		}
		free_list(newlist);
		newlist = NULL;
		*h = NULL;
	}
	return (node_count);
}
