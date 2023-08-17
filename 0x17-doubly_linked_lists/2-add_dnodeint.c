#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: the head of the list
 * @n: the int to add to the list
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;


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

	new->n = n;
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (*head);

}
