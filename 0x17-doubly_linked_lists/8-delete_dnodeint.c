#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 * @head: the head of the node
 * @index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *up, *down;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		(*head) = current->next;
		(*head)->prev = NULL;
		free(current);
		return (1);
	}

	current = *head;
	count = 0;
	while (current->next != NULL)
	{
		if (count == index)
		{
			up = current->next;
			down = current->prev;
			down->next = up;
			up->prev = down;
			free(current);
			return (1);
		}
		count++;
		current = current->next;
	}

	if (count == index)
	{
		down = current->prev;
		down->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
