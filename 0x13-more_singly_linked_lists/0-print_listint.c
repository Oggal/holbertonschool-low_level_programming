#include "lists.h"

/**
 * print_listint - print a list of ints
 * @h: head node of list
 *
 * Return: Number of Items in  List
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%i\n", h->n);
	return (1 + print_listint(h->next));
}
