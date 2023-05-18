#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - prog inserts node at position a doub linked list
 * @h: Pointer to the address of the head of the doubly linked list.
 * @idx: Index where the new node should be inserted, starting from 0.
 * @n: Value to be stored in the new node.
 *
 * Return:  address of new node, or NULL if it failed to insert the node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int position = 0;

	if (h == NULL)
	return (NULL);

	if (idx == 0)
	return (add_dnodeint(h, n));

	temp = *h;
	while (temp != NULL && position < idx - 1)
	{
	temp = temp->next;
	position++;
	}

	if (temp == NULL)
	return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next != NULL)
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
