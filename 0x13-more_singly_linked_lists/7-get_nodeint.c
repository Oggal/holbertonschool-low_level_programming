#include "lists.h"


/**
 * getnodeint_at_index - Retrieve node at index
 * @head: Head of list to retrieve node from
 * @index: Value of node to retrieve
 *
 * Return: Node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (index == 0 || head == NULL)
		return (head);
	return (get_nodeint_at_index(head->next, index - 1));
}
