#include "lists.h"

/**
 *print_dlistint - Print a doubly linked list
 *@h: Head of list
 *
 * Return: Count of Elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	/*
	 *  Gonna assume we're given the head every time
	 * Atleast for now...
	 */
	if (h == NULL)
		return (0);
	printf("%i\n", h->n);
	return (1 + print_dlistint(h->next));
}
