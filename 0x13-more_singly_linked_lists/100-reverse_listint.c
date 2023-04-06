#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - check code
 * @head: head of the list
 * Return: reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h;
	listint_t *tmp;

	if (*head == NULL)
		return (NULL);
/*	h = *head;*/
	tmp = NULL;

	while (*head != NULL)
	{
/*		h = *head;
		h->next = tmp;
		tmp = h;
		*head = (*head)->next;*/
h = (*head)->next;
(*head)->next = tmp;
tmp = *head;
*head = h;
	}

	*head = tmp;
	return (*head);
}
