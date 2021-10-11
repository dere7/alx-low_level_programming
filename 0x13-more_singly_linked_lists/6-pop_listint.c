#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list
 * @head: head of list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;

	if (*head)
		return (0);

	n = (*head)->n;
	h = (*head)->next;
	free(*head);
	**head = *h;
	return (n);
}
