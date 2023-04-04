#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - return the number of elements in a list
 * @h: the head of the list
 * Return: the number of elemnts in the list
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
