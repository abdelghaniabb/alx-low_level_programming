#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sum of all the data in the list
 * @head: the first node of the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *h;

	if (head == NULL)
		return (0);

	h = head;
	sum = 0;

	while (h)
	{
		sum = sum + h->n;
		h = h->next;
	}

	return (sum);
}
