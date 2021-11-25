#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add new node at the begging of list
 * @head: head of list to be added
 * @n: int to be added
 * Return: Pointer to newly created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
