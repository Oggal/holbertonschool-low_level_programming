#include "lists.h"

/**
 *sum_dnodeint - Get Node At Index
 *@head: Head of list
 *
 *Return: Sum of All Nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int tot;

	if (head == NULL)
		return (0);
	while (head->prev)
		head = head->prev;
	for (tot = 0; head->next; head = head->next)
		tot+=head->n;
	tot += head->n;
	return (tot);

}
