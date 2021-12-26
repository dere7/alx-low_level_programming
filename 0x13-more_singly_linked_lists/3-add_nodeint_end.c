#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - add new node at the end of list
 * @head: head of list to be added
 * @n: integer of node
 * Return: Pointer to newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	h = *head;
	if (*head)
	{
		while ((*head)->next)
			*head = (*head)->next;
		(*head)->next = new;
		*head = h;
	}
	else
		*head = new;
	return (new);
}
