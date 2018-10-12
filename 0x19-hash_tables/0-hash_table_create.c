#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table and returns a pointer to it
 * @size: size of the hash table
 * Return: pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htt;
	unsigned long int index = 0;

	htt = malloc(sizeof(hash_table_t));
	if (!htt)
	{
		return (NULL);
	}
	else
	{
		htt->size = size;
		htt->array = malloc(size * sizeof(hash_node_t *));
		if (!htt->array)
		{
			free(htt);
			return (NULL);
		}
		else
		{
			for (index = 0; index < size; index++)
				htt->array[index] = NULL;
			return (htt);
		}
	}
}
