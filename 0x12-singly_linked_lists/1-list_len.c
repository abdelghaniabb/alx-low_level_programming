#include <stdlib.h>
#include "lists.h"
/**
 * list_len - print the number of element in the list
 * @h: heead of the list
 * Return: the number of element
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
