#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint -  returns the sum of all the data (n) of a linked list
 * @head: the head of the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	if (head == NULL)
		return (0);

	sum = 0;
	current = head;
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}

	return (sum);
}
