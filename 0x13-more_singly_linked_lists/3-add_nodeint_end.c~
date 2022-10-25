#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * 
 * @head: pointer-to-pointer-to-listint_t
 * @n: constant integer parameter
 *
 * Return: listint_t;
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
  listint_t *last_node;
  listint_t *new_node;
  
  new_node = malloc(sizeof(listint_t));
  if (new_node == NULL)
    {
      return (NULL);
    }
  
  last_node = *head;
  new_node->n = n;
  new_node->next = NULL;
  
  if (*head == NULL)
    {
      *head = new_node;
    }
  
  while (last_node->next != NULL)
    {
      last_node = last_node->next;
    }
  last_node->next = new_node;
  return (*head);

}
