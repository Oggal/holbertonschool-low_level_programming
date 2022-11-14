#include "hash_tables.h"

/**
 *hash_table_get - retrieve value from hash table
 *@ht: table to retireve value from
 *@key: Key to the value to be retrieved
 *
 *Return: Value string or Null on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	int cmpRslt;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	while ((cmpRslt = strcmp(node->key, key)) && node->next)
		node = node->next;
	if (!cmpRslt)
		return (node->value);
	return (NULL);
}
