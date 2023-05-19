#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;


	while (head)
	{
		current = head;
		head = current->next;
		free(current);
	}
	
}
