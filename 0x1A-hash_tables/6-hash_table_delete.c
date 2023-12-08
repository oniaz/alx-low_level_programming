#include "hash_tables.h"

/**
 * hash_table_delete - frees the hash table
 * @ht: pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht)
	{
		if (ht->array)
		{
			for (i = 0; i < ht->size; i++)
			{
				if (ht->array[i])
				{
					hash_node_t *ptr = ht->array[i], *next = ptr->next;

					while (ptr)
					{
						next = ptr->next;
						free(ptr->key);
						free(ptr->value);
						free(ptr);
						ptr = next;
					}
				}
			}
			free(ht->array);
		}
		free(ht);
	}
}
