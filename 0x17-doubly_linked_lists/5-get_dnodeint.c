#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of the list
 * @head: the head of the list
 * @index: the index of the node to return
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	count = 0;
	current = head;
	while (current)
	{
		current = current->next;
		count++;
		if (count == index)
			return (current);
	}

	return (NULL);
}
