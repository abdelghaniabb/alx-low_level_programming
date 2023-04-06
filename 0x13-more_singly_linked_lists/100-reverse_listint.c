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
	listint_t *rev;

	if (*head == NULL)
		return (NULL);

	rev = NULL;

	while (*head)
	{
		h = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = h;
	}

	*head = rev;
	return (*head);
}
