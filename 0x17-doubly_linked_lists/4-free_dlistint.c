#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *tmp;

	tmp = head;
	if (tmp->prev != NULL)
	{
		while (tmp->prev != NULL)
			tmp = tmp->prev;
	}
	while (tmp != NULL)
	{
		current = tmp;
		tmp = tmp->next;
		tmp->prev = current;
		free(current);
	}

}
