#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - add new node at the end of list
 * @head: head of list to be added
 * @n: string of node
 * Return: Pointer to newly created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	h = *head;
	if (*head)
	{
		while ((*head)->next)
			*head = (*head)->next;
		(*head)->next = new;
		new->prev = *head;
		*head = h;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
