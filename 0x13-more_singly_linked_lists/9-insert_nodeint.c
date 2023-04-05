#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - add a node in the numbre idx of the list
 * @head: the head of the list
 * @idx: the index to add the new node
 * @n: the value of the new node
 * Return: the adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *h;
	listint_t *new_n;
	listint_t *tmp;

	h = *head;
	i = 0;
	new_n = (listint_t *) malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;

	if (idx == 0)
	{
		new_n->next = h;
		*head = new_n;
		return (new_n);
	}
	if (*head == NULL && idx == 0)
	{
		new_n->next = NULL;
		*head = new_n;
		return (new_n);
	}
	if (*head == NULL && idx != 0)
		return (NULL);

	while (i < idx - 1 && h->next != NULL)
	{
		h = h->next;
		i++;
	}

	if (i != idx - 1)
		return (NULL);

	tmp = h->next;
	h->next = new_n;
	new_n->next = tmp;
	return (new_n);
}
