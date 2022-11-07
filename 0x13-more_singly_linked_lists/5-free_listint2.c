#include "lists.h"

/**
 * free_listint2 - Free a list of ints
 * @head: Head of List to free
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *last;

	if (*head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		last = *head;
		*head = (*head)->next;
		free(last);
	}
	free(*head);
	head = NULL;
}
