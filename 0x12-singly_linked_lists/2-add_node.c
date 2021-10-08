#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	while (*str++ != '\0')
		i++;

	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}