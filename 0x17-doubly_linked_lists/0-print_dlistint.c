#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of the list
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curent;
	size_t count;

	if (h == NULL)
	{
		return (0);
	}

	count = 0;
	curent = malloc(sizeof(dlistint_t));
	if (curent == NULL)
	{
		return (EXIT_FAILURE);
	}

	curent = h;
	while (curent)
	{
		printf("%d\n", curent->n);
		curent = curent->next;
		count++;
	}



	return (count);
}
