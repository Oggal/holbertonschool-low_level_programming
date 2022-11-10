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

	if (h == NULL)
		return (-1);
	head = *h;
	while (head->prev)
		head = head->prev;
	for (; head->next; index--, head = head->next)
	{
		printf("EE:%i\n",index);
		if (index)
			continue;
		else
			break;
	}
	if (index)
		return (-1);
	if (head->prev)
	{
		printf("AP:%i\n",head->prev->n);
		head->prev->next = head->next;
	}
	if ((head)->next)
		((head)->next)->prev = (head)->prev;
	free(head);
	return (1);
}
