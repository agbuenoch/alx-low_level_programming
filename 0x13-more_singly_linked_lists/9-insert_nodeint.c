#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 *
 * @head: pointer-to-pointer-to-listint_t
 * @idx: integer parameter
 * @n: second integer paramter
 *
 * Return: pointer-to-listint_t
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
  unsigned int node;
  listint_t *new_node;
  listint_t *head_copy;

  head_copy = *head;

  new_node = malloc(sizeof(listint_t));
  if (new_node == NULL)
    {
      return (NULL);
    }
  new_node->n = n;    

  if (idx == 0)
    {
      new_node = head_copy;
      head_copy = new_node;
      return (new_node);
    }
  for (node = 0; node < (idx - 1); node++)
    {
      if (head_copy == NULL || head_copy->next == NULL)
	{
	  return (NULL);
	}
     
      head_copy = head_copy->next;
    }
  new_node->next = head_copy->next;
  head_copy->next = new_node;

  return (new_node);
}
