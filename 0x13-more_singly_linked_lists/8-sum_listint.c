#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - Program returns the sum of all data of linked list
 * @head: first node
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *brief = head;

	while (brief)
	{
		total += brief->n;
		brief = brief->next;
	}

	return (total);
}
