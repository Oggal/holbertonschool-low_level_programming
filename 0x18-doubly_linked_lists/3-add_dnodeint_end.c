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

	dlistint_t *newNode, *holder;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n  = n;
	if (*head == NULL)
		return (*head = newNode);
	holder = *head;
	while (holder->next)
	{
		holder = holder->next;
	}
	holder->next = newNode;
	newNode->prev = holder;
	return (newNode);
}
