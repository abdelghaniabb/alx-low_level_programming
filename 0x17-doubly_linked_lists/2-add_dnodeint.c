#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}

	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
