#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Add Node to top of list
 * @head: Pointer to head of list
 * @str: String to store at node
 *
 * Return: new head
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int l = 0;
	list_t *newHead;

	newHead = malloc(sizeof(list_t));
	if (newHead == NULL)
		return (NULL);
	if (str != NULL)
		newHead->str = strdup(str);
	if (newHead->str != NULL)
	{
		while (newHead->str[l])
			l++;
		newHead->len = l;
	}
	newHead->next = *head;
	*head = newHead;
	return (*head);
}
