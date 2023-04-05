#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete a given node
 * @head: the head of the list
 * @index: the numbre of the node to delete in the list
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h;
	unsigned int i;
	listint_t *tmp;
	listint_t *tmp2;

	h = *head;
	i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = h->next;
		free(h);
		return (1);
	}

	while (i < index -1 && h->next != NULL)
	{
		h = h->next;
		i++;
	}

	if (i != index - 1)
		return (-1);

	tmp = h->next;
	tmp = tmp->next;
	tmp2 = h->next;
	free(tmp2);
	h->next = tmp;
	return (1);
}
