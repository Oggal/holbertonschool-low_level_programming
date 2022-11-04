#include "lists.h"


/**
 * add_nodeint - Add node to head of list
 * @head: head of list
 * @n: value of node
 *
 * Return: Node Added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	newNode->next = *head;
	return (*head = newNode);
}
