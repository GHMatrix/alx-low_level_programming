#include "lists.h"
#include <stdio.h>
/**
 * free_listint - Program frees linked list
 * @head: linked list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *brief;

	while (head)
	{
		brief = head->next;
		free(head);
		head = brief;
	}
}
