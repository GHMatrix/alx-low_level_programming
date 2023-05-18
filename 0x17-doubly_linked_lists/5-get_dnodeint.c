#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the desired node, starting from 0.
 *
 * Return: The nth node of the doubly linked list, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int position = 0;

	while (current != NULL && position < index)
	{
	current = current->next;
	position++;
	}

	if (current == NULL)
	{
	return (NULL);
	}

	return (current);
}

