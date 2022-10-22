#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 *
 * @h: constant parameter of list_t type
 *
 * Return: number of element in a list
*/
size_t list_len(const list_t *h)
{
size_t no_elements;
no_elements = 0;
while (h)
{
h = h->next;
no_elements++;
}
return (no_elements);
}
