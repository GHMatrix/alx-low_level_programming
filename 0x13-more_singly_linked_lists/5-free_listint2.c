#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - Program frees linked list
 * @head: linked list to be considered
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *brief;

	if (head == NULL)
		return;

	while (*head)
	{
		brief = (*head)->next;
		free(*head);
		*head = brief;
	}
	*head = NULL;
}
