#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the head of the dlistint_t list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *up;
	const dlistint_t *down;
	int count;

	if (h == NULL)
		return (0);

	up = h;
	down = h;
	count = 0;

	while (up->next != NULL)
	{
		count++;
		up = up->next;
	}
	while (down != NULL)
	{
		count++;
		down = down->prev;
	}

	return (count);
}

