#include "lists.h"

/**
 * insert_nodeint_at_index - Add Node at index
 * @head: Head of list to add node to
 * @index: Index to add node at
 * @n: Value of Node
 *
 * Returns:address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *newNode;

	if (index > 1)
		return (insert_nodeint_at_index((*head)->next, index-1, n));
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	if (index == 0)
	{
		newNode->next = *head;
		newNode->n = n;
		return (*head = newNode);
	}
	newNode->next = (*head)->next;
	newNode->n = n;
	return ((*head)->next = newNode);
}
