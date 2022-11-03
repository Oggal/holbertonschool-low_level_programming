#include "lists.h"

/**
 * free_list - Free A linked List
 * @head: Head of List to be freed
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
