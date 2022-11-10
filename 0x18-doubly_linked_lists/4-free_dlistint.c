#include "lists.h"

/**
 *free_dlistint - Free a dlist
 *@head: Head of list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->prev)
		head = head->prev;
	while (head->next)
	{
		free(L->prev);
		head = head->next;
	}
	free(head->prev);
	free(head);
}
