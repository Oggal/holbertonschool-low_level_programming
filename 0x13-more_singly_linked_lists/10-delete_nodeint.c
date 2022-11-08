#include "lists.h"

/**
 * delete_nodeint_at_index - Free Node at index
 * @head: head of list to remove node from
 * @index: Index of node to remove
 *
 * Return: 1 on sucess or -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t old;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index > 1)
		return (delete_nodeint_at_index(&(*head)->next, index - 1));
	if (index == 0)
	{
		old = *head;
		*head = (*head)->next;
		free(old);
		return (1);
	}
	old = (*head)->next;
	(*head)->next = old->next;
	free(old);
	return (1);
}
