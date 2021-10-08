#include <stddef.h>
#include "lists.h"

/**
 * list_len - return number of elements in linked list
 * @h: head of list
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
