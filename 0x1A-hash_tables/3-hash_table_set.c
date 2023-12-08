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
	hash_node_t *ptr, *node;

	if (key == NULL || *key == '\0' || value == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (!strcmp(key, (const char *)ptr->key))
		{
			ptr->value = malloc(strlen(value + 1));
			if (!ptr->value)
				return (0);
			strcpy(ptr->value, value);
			return (1);
		}
		ptr = ptr->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = malloc(strlen(key) + 1);
	if (!node->key)
		return (0);
	strcpy(node->key, key);
	node->value = malloc(strlen(value) + 1);
	if (!node->value)
		return (0);
	strcpy(node->value, value);
	node->next = NULL;

	if (ht->array[index])
		node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
