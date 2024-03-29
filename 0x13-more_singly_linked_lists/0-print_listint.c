#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Program prints all elements of a linked list
 * @h: linked list to be considered
 * Return: nodes in numbers
 */
size_t print_listint(const listint_t *h)
{
	size_t index = 0;

	while (h)
	{
		printf("%d\n", h->n);
		index++;
		h = h->next;
	}

	return (index);
}
