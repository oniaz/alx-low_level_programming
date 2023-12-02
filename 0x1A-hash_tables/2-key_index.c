#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 * @key: key string for which an index is retrieved.
 * @size: size of the array of the hash table.
 *
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
