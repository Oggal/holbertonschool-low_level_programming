#include "hash_tables.h"

/**
 * hash_table_set - Set Value for Key in table
 * @ht: Table to store value in
 * @key: Key to value
 * @value: Value to store
 *
 * Return : 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = 0;
	hash_node_t *listHead, *newNode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
        newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
        newNode->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	listHead = ht->array[index];
	while (listHead)
	{
		if (!strcomp(listHead->key,key)
			{
				free(listHead->value);
				listHead->value = newNode->value;
				free(newNode->key);
				free(newNode);
				return (1);
			}
		listHead = listHead->next;
	}
        listHead = newNode;
	return (1);
}
