#include "lists.h"

/**
 * free_listint - Free a list of ints
 * @head: Head of List to free
 *
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_listint(head->next);
	free(head);
}
