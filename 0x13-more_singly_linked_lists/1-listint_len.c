#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Program returns number of elements in linked list
 * @h: list to be considered
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t index = 0;

	while (h)
	{
		index++;
		h = h->next;
	}

	return (index);
}
