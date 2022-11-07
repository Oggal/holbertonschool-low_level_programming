#include "lists.h"

/**
 * free_listint2 - Free a list of ints
 * @head: Head of List to free
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (*head == NULL)
		return;
	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}

	*head = NULL;
}
