#include "lists.h"

/**
 *dlistint_len - Count a doubly linked list
 *@h: Head of list
 *
 * Return: Count of Elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	/*
	 *  Gonna assume we're given the head every time
	 * Atleast for now...
	 */
	if (h == NULL)
		return (0);
	return (1 + dlistint_len(h->next));
}
