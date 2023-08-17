#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - eturns the nth node of a dlistint_t linked list.
 * @head: the head of the list
 * @index: the index of the node
 * Return: the adress of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	if (current->prev != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}

	while (current->next != NULL)
	{
		count++;
		current = current->next;
		if (index == count)
			return (current);
	}

	return (NULL);


}
