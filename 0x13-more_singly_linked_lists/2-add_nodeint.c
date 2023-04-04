#include "lists.h"
#include <stdio.h>
/**
 * *add_nodeint - Program adds node at beginning of linked list
 * @head: first node of linked list
 * @n: insert data
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *latest;

	latest = malloc(sizeof(listint_t));
	if (!latest)
		return (NULL);

	latest->n = n;
	latest->next = *head;
	*head = latest;

	return (latest);
}
