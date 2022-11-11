#include "lists.h"

/**
 *delete_dnodeint_at_index - remove Node At Index
 *@head: Head of list
 *@index: Index of node to remove
 *
 *Return: Node at index or null
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *head;

	head = get_dnodeint_at_index(*h,index);
	if (!head)
		return (-1);
	if (index == 0)
		h = &(head->next);
	if ((head)->next)
		((head)->next)->prev = (head)->prev;
	if (head->prev)
		head->prev->next = head->next;
	else
		*h = head->next;
	free(head);
	return (1);
}
