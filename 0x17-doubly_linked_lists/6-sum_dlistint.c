#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list.
 * @head: the head of the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int s;

	if (head == NULL)
		return (0);

	current = head;
	s = 0;

	while (current != NULL)
	{
		s = s + current->n;
		current = current->next;
	}

	return (s);
}
