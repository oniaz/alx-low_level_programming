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
	char *valueCpy = NULL;
	hash_node_t *ptr;

	if (key == NULL || *key == '\0' || value == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (strcmp(key, ptr->value))
		{valueCpy = malloc(sizeof(strlen(value)));
			strcpy(valueCpy, value);
			ptr->value = valueCpy;
			free(valueCpy);
			return (1);
		}
		ptr = ptr->next;
	}
	
	
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = (char*) key;
	
	valueCpy = malloc(sizeof(strlen(value)));
	strcpy(valueCpy, value);
	node->value = valueCpy;
	free(valueCpy);

	node->next = NULL;

	if (ht->array[index] != NULL)
		node->next = ht->array[index];

	ht->array[index] = node;
	return (1);
}
