#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of list
 * @head: head of list
 * @index: index of the node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL, *h;
	size_t i;

	for (i = 0, h = head; h && i <= index; i++, h = h->next)
	{
		if (i == index)
			node = h;
	}
	return (node);
}
