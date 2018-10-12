#include "hash_tables.h"

/**
 * hash_table_set - inserts a value into hashtable
 * @ht: pointer to the hash table
 * @key: pointer to the key value
 * @value: pointer to the value
 * Return: 1 if successful 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *cp_val = NULL;
	hash_node_t *node = NULL;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);
	cp_val = strdup(value);
	if (!cp_val)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(key, node->key) != 0)
			node = node->next;
		else
		{
			free(node->value);
			node->value = cp_val;
			return (1);
		}
	}
	node = new_node(key, cp_val);
	if (!node)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

/**
 * new_node - creates a new node for hash table and return
 * @key: key for the node
 * @cp_val: value for the node
 * Return: newly created node or 0 if failed
 */
hash_node_t *new_node(const char *key, char *cp_val)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	char *cp_key = NULL;

	if (!new_node)
	{
		free(cp_val);
		return (0);
	}
	cp_key = strdup(key);
	if (!cp_key)
	{
		free(cp_val);
		free(new_node);
		return (0);
	}
	new_node->key = cp_key;
	new_node->value = cp_val;
	return (new_node);
}
