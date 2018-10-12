#include "hash_tables.h"

/**
 * hash_table_print - prints the content of the hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int val_found = 0;

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			node = ht->array[index];
			if (node)
			{
				if (!val_found)
					val_found = 1;
				else
					printf(", ");
				do {
					printf("'%s': '%s'", node->key, node->value);
					if (node->next)
						printf(", ");
					node = node->next;
				} while (node);
			}
		}
		printf("}\n");

	}
}
