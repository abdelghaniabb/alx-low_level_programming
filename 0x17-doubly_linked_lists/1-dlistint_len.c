#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - return the number of elements in the list
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curent;
	size_t count;

	if (h == NULL)
	{
		return (0);
	}

	count = 0;
	curent = h;
	while (curent)
	{
		curent = curent->next;
		count++;
	}

	return (count);
}
