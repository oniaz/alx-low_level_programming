#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to the hash table.
 * @key: the key for which the value will be retrieved.
 * Return: the value associated with the element, or NULL if key not be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;

	if (!ht || !ht->array || !key)
		return (NULL);

	ptr = ht->array[key_index((const unsigned char *)key, ht->size)];
	while (ptr)
	{
		if (!strcmp((char *)key, ptr->key))
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
