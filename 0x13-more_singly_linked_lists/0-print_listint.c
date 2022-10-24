#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - function that prints all the elements of a listint_t list.
 *
 * @h: pointer-to-listint_t
 *
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t no_nodes;
no_nodes = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
no_nodes++;
}
return (no_nodes);
}
