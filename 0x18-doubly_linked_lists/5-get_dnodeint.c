#include "lists.h"

/**
 *get_dnodeint_at_index - Get Node At Index
 *@head: Head of list
 *@index: Index of node to get
 *
 *Return: Node at index or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (head->prev)
		head = head->prev;
	for (; head->next; index--, head = head->next)
	{
		if (index)
			continue;
		else
			return (head);
	}
	if (index)
		return (NULL);
	return (head);
}
