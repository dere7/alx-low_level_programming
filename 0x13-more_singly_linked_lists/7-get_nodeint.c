#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of list
 * @head: head of list
 * @index: index of the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL, *h;
	size_t i;

	for (i = 0, h = head; h && i <= index; i++, h = h->next)
	{
		if (i == index)
			node = h;
	}
	return (node);
}
