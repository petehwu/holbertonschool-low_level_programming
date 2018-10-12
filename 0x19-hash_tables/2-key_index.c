#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: the key to get index for
 * @size: size of the hash table
 * Return: index value for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
