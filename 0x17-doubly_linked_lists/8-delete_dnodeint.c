#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at position a doubly linked list
 * @head: Pointer to the address of the head of the doubly linked list.
 * @index: Index of the node to be deleted, starting from 0.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int position = 0;

	if (head == NULL || *head == NULL)
	return (-1);

	temp = *head;

	if (index == 0)
	{
	*head = temp->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(temp);
	return (1);
	}

	while (temp != NULL && position < index)
	{
	temp = temp->next;
	position++;
	}

	if (temp == NULL)
	return (-1);

	prev = temp->prev;
	prev->next = temp->next;
	if (temp->next != NULL)
	temp->next->prev = prev;
	free(temp);

	return (1);
}
