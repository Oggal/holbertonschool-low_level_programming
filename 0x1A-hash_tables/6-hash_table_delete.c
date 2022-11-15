#include "hash_tables.h"

/**
 * hash_table_delete - free a hash table
 * @ht: hash Table to free;
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *last;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			last = node;
			node = node->next;
			free(last->key);
			free(last->value);
			free(last);
		}
	}
	free(ht->array);
	free(ht);
}
