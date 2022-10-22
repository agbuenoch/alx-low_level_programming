#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: constant parameter of list_t type
 *
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
size_t nodes;
nodes = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nill)\n");
}
else
{
printf("[%d]%s\n", h->len, h->str);
}
h = h->next;
nodes++;
}
return (nodes);
}
