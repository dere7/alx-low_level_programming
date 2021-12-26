#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%u] %s\n", h->len, (h->str == NULL ? "(nil)" : h->str));
		h = h->next;
		i++;
	}

	return (i);
}
