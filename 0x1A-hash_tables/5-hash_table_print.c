#include "hash_tables.h"

/**
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *currNode;

	if (ht == NULL)
		return;

	printf("{");
	for( i = 0; i < ht->size; i++)
	{
	        currNode = ht->array[i];
		while(currNode)
		{
			printf("'%s': '%s'", currNode->key, currNode->value);
			currNode = currNode->next;
			if(currNode)
				printf(", ");
		}
	}
	printf("}");
}
