#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
