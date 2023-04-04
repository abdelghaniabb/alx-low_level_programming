#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free the list
 * @head: the head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
