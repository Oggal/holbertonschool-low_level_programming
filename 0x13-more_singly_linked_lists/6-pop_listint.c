#include "lists.h"

/**
 * pop_listint - 'POP' the head node from linked list
 * @head: Head node of list to pop
 *
 * Return: Value of head node
 */
int pop_listint(listint_t **head)
{
	int out_n;
	listint_t *oldHead;

	if (head == NULL || *head == NULL)
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
