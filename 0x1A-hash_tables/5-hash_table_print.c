#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			hash_node_t *ptr = ht->array[i];

			while (ptr)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", ptr->key, ptr->value);
				flag = 1;
				ptr = ptr->next;
			}
		}
	}
	printf("}\n");
}
