#include "lists.h"

/**
 * print_list - Print a singly linked list
 * @h: Node to start printing at
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	/*Print the Node */
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}

	return (1 + print_list(h->next));
}
