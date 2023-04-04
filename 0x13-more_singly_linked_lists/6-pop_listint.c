#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - Program deletes head node of linked list
 * @head: linked list first element
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *brief;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	brief = (*head)->next;
	free(*head);
	*head = brief;

	return (number);
}
