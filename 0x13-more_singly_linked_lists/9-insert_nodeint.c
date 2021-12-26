#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - add new node at given position
 * @head: head of list to be added
 * @idx: index
 * @n: integer of node
 * Return: Pointer to newly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *h;
	size_t i;

	new = malloc(sizeof(listint_t));
	if (new == NULL || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	h = *head;
	if (idx == 0)
	{
		new->next = h;
		*head = new;
	}
	else
		for (i = 0; i <= idx && h; i++, h = h->next)
		{
			if (i + 1 == idx)
			{
				new->next = h->next;
				h->next = new;
			}
		}

	/* if index doesn't exist */
	if (i > idx)
		return (NULL);

	return (new);
}
