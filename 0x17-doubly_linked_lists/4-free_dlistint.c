#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
