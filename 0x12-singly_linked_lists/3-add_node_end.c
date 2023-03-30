#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add node in the list
 * @head: the first element of the list
 * @str: the string to add
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int n = strlen(str);
	list_t *new;
	list_t *h;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		h = *head;
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new;
	}
	return (0);
}
