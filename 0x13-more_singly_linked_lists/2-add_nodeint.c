#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list.
 *
 * @head: pointer-to-listint_t
 * @n: constant integer parameter
 *
 * Return: listint_t
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->next = *head;
*head = new_node;
new_node->n = n;
return (*head);
}
