#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	h = *head;
	*head = h->next;
	n = h->n;
	return (n);
}
