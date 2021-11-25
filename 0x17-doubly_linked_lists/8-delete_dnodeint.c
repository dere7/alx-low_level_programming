#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of list
 * @index: index
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	size_t i;

	if (*head == NULL)
		return (-1);

	h = *head;
	if (index == 0)
	{
		(*head)->prev = NULL;
		*head = h->next;
		free(h);
		return (1);
	}

	for (i = 1; i <= index && h; i++, h = h->next)
	{
		if (i == index)
		{
			h->prev->next = h->next;
			if (h->next)
				h->next->prev = h->prev;
			free(h);
			return (1);
		}
	}

	return (-1);
}
