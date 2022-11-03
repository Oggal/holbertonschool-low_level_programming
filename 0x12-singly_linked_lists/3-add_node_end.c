#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * get_tail - return last node of linked list
 * @head: list to get tail node of
 *
 * Return: Tail Node
 */
list_t *get_tail(list_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);
	return (get_tail(&(*head)->next));
}



/**
 * add_node_end - Add Node to tail of list
 * @head: Pointer to head of list
 * @str: String to store at node
 *
 * Return: new head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int l = 0;
	list_t *newTail;
	list_t *tail = get_tail(head);

	newTail = malloc(sizeof(list_t));
	if (newTail == NULL)
		return (NULL);
	if (str != NULL)
		newTail->str = strdup(str);
	if (newTail->str != NULL)
	{
		while (newTail->str[l])
			l++;
		newTail->len = l;
	}
	if (tail != NULL)
		return (tail->next = newTail);
	return (*head = newTail);
}
