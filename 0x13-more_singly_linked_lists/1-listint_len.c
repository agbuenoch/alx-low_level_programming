#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 *
 * @h: pointer-to-listint_t
 *
 * Return: size_t
*/
size_t listint_len(const listint_t *h)
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
