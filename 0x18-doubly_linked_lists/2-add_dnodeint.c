#include "lists.h"

/**
 *add_dnodeint - Add A node to a dlist
 *@head: Head of dList
 *@n: Node Value to Add
 *
 * Return: Node, or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if ( newNode == NULL)
		return (NULL);
	newNode->n  = n;
	if (*head == NULL)
		return (*head = newNode);
	while((*head)->prev)
	{
		*head = (*head)->prev;
	}
	(*head)->prev = *head;
	return (*head = newNode);
}
