#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free the list
 * @head: the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	while (*head)
	{
		h = *head;
		*head = h->next;
		free(h);
	}
	*head = NULL;
	return;
}
