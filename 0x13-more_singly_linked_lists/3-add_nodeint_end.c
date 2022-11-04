#include "lists.h"


/**
 * add_nodeint_end - Add node to tail of list
 * @head: head of list
 * @n: value of node
 *
 * Return: Node Added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tail;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (*head == NULL)
		return (*head = newNode);
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	return (tail->next = newNode);

}
