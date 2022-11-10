#include "lists.h"

/**
 *free_dlistint - Free a dlist
 *@head: Head of list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (head->prev)
		free_dlistint(head-prev);
	if (head->next)
		free_dlistint(head->next);
	free(head);
}
