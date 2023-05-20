#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of the linked list
 * @idx: the index where to inser the node
 * @n: the data
 * Return: the adress of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *current;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == 0)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		(*h)->prev = new;
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	if (*h == NULL)
		return (NULL);

	count = 0;
	current = *h;
	while (current)
	{
		current = current->next;
		count++;
		if (count == idx)
		{
			new->next = current;
			new->prev = current->prev;
			(current->prev)->next = new;
			current->prev = new;
			return (new);
		}
	}

	return (NULL);
}
