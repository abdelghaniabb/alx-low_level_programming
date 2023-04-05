#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get the node number index
 * @head: the head of the list
 * @index: the index of the node to print
 * Return: the node numbre index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *h;

	h = head;
	i = 0;

	while (i < index && h != NULL)
	{
		h = h->next;
		i++;
	}

	if (i != index || h->next == NULL)
		return (NULL);

	return (h);
}
