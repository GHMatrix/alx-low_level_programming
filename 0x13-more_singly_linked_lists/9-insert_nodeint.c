#include "lists.h"
#include <stdio.h>
/**
 * *insert_nodeint_at_index - Program inserts new node at given position
 * @head: first node pointer
 * @idx: position of new additional node
 * @n: data of new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *latest;
	listint_t *brief = *head;

	latest = malloc(sizeof(listint_t));
	if (!latest || !head)
		return (NULL);

	latest->n = n;
	latest->next = NULL;

	if (idx == 0)
	{
		latest->next = *head;
		*head = latest;
		return (latest);
	}
	for (a = 0; brief && a < idx; a++)
	{
		if (a == idx - 1)
		{
			latest->next = brief->next;
			brief->next = latest;
			return (latest);
		}
		else
			brief = brief->next;
	}
	return (NULL);
}
