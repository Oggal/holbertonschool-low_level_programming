#include "lists.h"

/**
 *add_dnodeint_end - Add A node to a dlist
 *@head: Head of dList
 *@n: Node Value to Add
 *
 * Return: Node, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n  = n;
	if (*head == NULL)
		return (*head = newNode);
	while ((*head)->next)
	{
		*head = (*head)->next;
	}
	(*head)->next = newNode;
	newNode->previous = *head;
	return (newNode);
}
