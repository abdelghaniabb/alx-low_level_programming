#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a node in the begining of the list
 * @head: the head of the list
 * @n: the value to add in the list
 * Return: void
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = (listint_t*)malloc(sizeof(listint_t));
	if (new_n == NULL || head == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->next = *head;
	*head = new_n;
	return (0);
}
