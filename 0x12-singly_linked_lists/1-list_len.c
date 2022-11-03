#include "lists.h"

/**
 * list_len - Get Length of list
 * @h: Starting node in list to count
 *
 *Return: Count of Nodes in list
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + list_len(h->next));
}
