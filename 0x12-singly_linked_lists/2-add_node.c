#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add node in the list
 * @head: the first element of the list
 * @str: the string to add
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	int n = strlen(str);
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = n;
	new->next = *head;
	*head = new;
	return (0);
}
