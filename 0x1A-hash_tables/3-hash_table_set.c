#include "hash_tables.h"

/**
 * hash_table_set - gives the index of a key.
 * @ht:pointer to the hash table.
 * @key: the key.
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;


	if (key == NULL || key[0] == '\0' || value == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;

	if (ht->array[index] != NULL)
		node->next = ht->array[index];

	ht->array[index] = node;

	return (1);
}
