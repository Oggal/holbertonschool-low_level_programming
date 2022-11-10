#include "lists.h"

/**
 *free_dlistint - Free a dlist
 *@head: Head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *L;
	if (head == NULL)
		return;
	while (head->prev)
		head = head->prev;
	while (L->next)
	{
		free(L->prev);
		L=L->next;
	}
	free(L->prev);
	free(L);
}
