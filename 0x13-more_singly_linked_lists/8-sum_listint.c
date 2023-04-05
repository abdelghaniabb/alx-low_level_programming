#include <stdlib.h>
#include "lists.h"

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
