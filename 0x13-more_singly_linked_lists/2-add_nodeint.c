#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - add new node at the begging of list
 * @head: head of list to be added
 * @n: integer
 * Return: Pointer to newly created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
