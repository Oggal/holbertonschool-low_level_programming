#include "lists.h"

/**
 *
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	int out_n;
	listint_t *oldHead;

	if (*head == NULL)
		return (0);

	out_n = (*head)->n;
	oldHead = *head;
	if ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	free(oldHead);
	return (out_n);
}
