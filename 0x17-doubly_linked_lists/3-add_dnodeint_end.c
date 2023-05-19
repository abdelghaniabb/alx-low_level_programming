#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end -add a node to the list
 * @head: the head of the list
 * @n: the element to add
 * Return: the adress of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *curent;

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

	curent = *head;
	while (curent->next)
	{
		curent = curent->next;
	}

	curent->next = new;

	new->prev = curent;
	return (new);
}
