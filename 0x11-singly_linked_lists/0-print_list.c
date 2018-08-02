#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: list to print
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t str_cnt = 0, ele_cnt = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (!(h->str))
		{
			printf("[0] (nil)");
		}
		else
		{
			str_cnt = 0;
			while (h->str[str_cnt])
				str_cnt++;
			printf("[%zd] %s", str_cnt, h->str);

		}
		printf("\n");
		h = h->next;
		ele_cnt++;
	}
	return (ele_cnt);
}
