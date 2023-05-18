#include "lists.h"

/**
 * sum_dlistint - Returns the sum of data values in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: sum of data values in the doubly linked list, 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
	sum += node->n;
	node = node->next;
	}

	return (sum);
}
