#include "hash_tables.h"

/**
 * hash_table_get - gets an item from a hash table
 * @ht: pointer to hash table
 * @key: pointer to the key to look for
 * Return: pointer to the result value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (!ht || !key || !*key)
		return (NULL);
	node = ht->array[key_index((unsigned char *) key, ht->size)];
	while (node)
	{
		if (strcmp(key, node->key) != 0)
			node = node->next;
		else
			return (node->value);
	}
	return (NULL);
}
