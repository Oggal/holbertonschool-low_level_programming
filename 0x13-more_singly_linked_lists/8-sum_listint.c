#include "lists.h"

/**
 * sum_listint - return sum of list
 * @head: Head of list
 *
 * Return: Total of all items in list
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_listint(head->next));
}
