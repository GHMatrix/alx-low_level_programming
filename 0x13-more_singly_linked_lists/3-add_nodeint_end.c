#include "lists.h"
#include <stdio.h>
/**
 * *add_nodeint_end - Program adds new node at end of linked list
 * @head: pinter to first element
 * @n: insert data
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *latest;
	listint_t *brief = *head;

	latest = malloc(sizeof(listint_t));
	if (!latest)
		return (NULL);

	latest->n = n;
	latest->next = NULL;
	if (*head == NULL)
	{
		*head = latest;
		return (latest);
	}

	while (brief->next)
		brief = brief->next;

	brief->next = latest;

	return (latest);
}
