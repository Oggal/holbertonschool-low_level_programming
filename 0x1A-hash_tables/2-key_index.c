#include "hash_tables.h"

/**
 * key_index - get the ul-int index of a string key
 * @key: str value of the key
 * @size: Size of Hashmap
 *
 * Return: Key index value
 */
unsigned long int key_index(const unsigned char *key,
			    const unsigned long int size)
{

	if (!size)
		return (0);
	return (hash_djb2(key) % size);
}
