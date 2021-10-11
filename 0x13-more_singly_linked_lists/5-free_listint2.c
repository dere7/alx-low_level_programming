#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees list
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	while (*head)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
	}
	*head = NULL;
}
