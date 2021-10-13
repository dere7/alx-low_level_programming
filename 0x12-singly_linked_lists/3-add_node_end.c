#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - add new node at the end of list
 * @head: head of list to be added
 * @str: string of node
 * Return: Pointer to newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *h;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	while (*str++ != '\0')
		i++;

	new->len = i;
	new->next = NULL;

	h = *head;
	if (*head)
	{
		while ((*head)->next)
			*head = (*head)->next;
		(*head)->next = new;
		*head = h;
	}
	else
		*head = new;
	return (new);
}
