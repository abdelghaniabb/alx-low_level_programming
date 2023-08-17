#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head of the dlistint_t list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *up;
	const dlistint_t *down;
	int count;

	if (h == NULL)
		return (0);

	up = h;
	down = h;
	count = 0;

	while (up != NULL)
	{
		count++;
		printf("%i\n", up->n);
		up = up->next;
	}
	while (down->prev != NULL)
	{
		count++;
		down = down->prev;
		printf("%i\n", down->n);
	}

	return (count);
}
