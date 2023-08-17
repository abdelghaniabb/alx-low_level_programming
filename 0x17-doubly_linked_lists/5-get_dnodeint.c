#include <stdlib.h>
#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
		
	if (index == 0)
		return (head);

	if (current->prev != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}

	while (current->next != NULL)
	{
		count++;
		current = current->next;
		if (index == count)
			return (current);
	}

	return (NULL);


}
