#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head of list
 * @index: index
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *prev = NULL;
	size_t i;

	if (*head == NULL)
		return (-1);

	h = *head;
	if (index == 0)
	{
		*head = h->next;
		free(h);
		return (1);
	}

	for (i = 0; i <= index && h; i++, h = h->next)
	{
		if (i + 1 == index)
			prev = h;
		if (i == index)
		{
			prev->next = h->next;
			free(h);
			return (1);
		}
	}

	return (-1);
}
