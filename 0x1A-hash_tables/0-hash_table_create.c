#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: array size.
 *
 * Return: pointer to the hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	hash_node_t **hashTableArray;
	unsigned long int i;

	hashTable = malloc(sizeof(hash_table_t));
	if (!hashTable)
		return (NULL);

	hashTableArray = malloc(sizeof(hash_node_t) * size);
	if (!hashTableArray)
	{
		free(hashTable);
		return (NULL);

	}

	for (i = 0; i < size; i++)
		hashTableArray[i] = NULL;

	hashTable->array = hashTableArray;
	hashTable->size = size;

	return (hashTable);
}
