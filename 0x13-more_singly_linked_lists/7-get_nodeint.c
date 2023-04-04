#include "lists.h"
#include <stdio.h>
/**
 * *get_nodeint_at_index - Program returns nth node of linked list
 * @head: first node
 * @index: index of the node
 * Return: nth node pointer or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *brief = head;

	while (brief && a < index)
	{
		brief = brief->next;
		a++;
	}

	return (brief ? brief : NULL);
}
