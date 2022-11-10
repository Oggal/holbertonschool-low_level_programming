#include "lists.h"

/**
 *print_dlistint_backward - Print a doubly linked list
 *@h: Head of list
 *
 * Return: Count of Elements
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t c;

	if (h == NULL)
		return (0);
	while (h->next)
		h = h->next;
	for (c = 0; h; i++, h = h->prev)
		printf("%i\n", h->n);
	return (c);
}
