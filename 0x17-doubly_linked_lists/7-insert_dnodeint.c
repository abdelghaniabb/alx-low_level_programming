#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the head of the list
 * @idx: the index of the list where the new node should be added.
 * @n: the value to add into the list
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int count;

	if (*h == NULL && idx != 0)
		return (NULL);

	current = *h;
	count = 0;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0 && *h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (*h);
	}

	while (current != NULL)
	{
		if (count == idx)
		{
			new->next = current;
			new->prev = current->prev;
			current->prev = new;
			current->prev->next = new;
			return (new);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
