#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add a  node to the end of the list
 * @head: the head of the list
 * @n: the new value
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *new_n;

	new_n = (listint_t *) malloc(sizeof(listint_t));
	h = *head;
	if (new_n == NULL)
		return (NULL);


	if (*head == NULL)
	{
		new_n->n = n;
		*head = new_n;
		new_n->next = NULL;
		return (new_n);
	}
	while (h->next)
	{
		h = h->next;
	}

	new_n->n = n;
	h->next = new_n;
	new_n->next = NULL;
	return (new_n);
}
