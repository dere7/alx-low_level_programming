#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - add new node at given position
 * @h: head of list to be added
 * @idx: index
 * @n: integer of node
 * Return: Pointer to newly created node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head;
	size_t i;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	head = *h;
	if (idx == 0)
	{
		new->next = head;
		new->prev = NULL;
		*h = new;
	}
	else
		for (i = 1, head = head->next; i <= idx && head; i++, head = head->next)
		{
			if (i == idx)
			{
				head->prev->next = new;
				new->prev = head->prev;
				new->next = head;
				head->prev = new;
				break;
			}
			else if (i + 1 == idx && head->next == NULL)
			{
				head->next = new;
				new->prev = head;
				break;
			}
		}
	/* if index doesn't exist */
	if (i > idx)
		return (NULL);
	return (new);
}
