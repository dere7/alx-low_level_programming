#include "lists.h"

/**
 * sum_dlistint - return sum of elements
 * @head: head of the list
 * Return: sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
