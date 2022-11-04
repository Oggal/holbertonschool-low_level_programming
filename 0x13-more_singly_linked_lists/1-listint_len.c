#include "lists.h"

/**
 * listint_len - get length of a list of ints
 * @h: head node of list
 *
 * Return: Number of Items in  List
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + print_listint(h->next));
}
