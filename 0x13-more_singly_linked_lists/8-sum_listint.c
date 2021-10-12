#include "lists.h"
/**
 * sum_listint - sum of all the data
 * @head: head of a list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *h = head;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}

	return sum;
}