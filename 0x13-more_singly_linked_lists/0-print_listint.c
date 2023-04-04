#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print all elements of a listint_t
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
    int i = 0;

    while (h)
    {
        printf("%i\n", h->n);
        h = h->next;
        i++;
    }
    return (i);
}