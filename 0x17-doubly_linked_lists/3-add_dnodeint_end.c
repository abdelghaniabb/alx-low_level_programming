#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: the head of the list
 * @n: the int to add to the list
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	new->n = n;
	current->next = new;
	new->next = NULL;
	new->prev = current;
	current = new;

	return (current);

}
