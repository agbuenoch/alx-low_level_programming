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
  unsigned int count;
  listint_t *new_node;
  /*listint_t *temp_2;*/

  new_node = malloc(sizeof(listint_t) * n);
  if (new_node == NULL)
    {
      return (NULL);
    }
    
  for (count = 0; count < idx; count++)
    {
      if (*head == NULL)
	{
	  return (NULL);
	}
      if (!(idx < count))
	{
	  return (NULL);
	}
      else
	{
      *head = (*head)->next;
	}
    }
      new_node = *head;
    
      *head = new_node;
      /*  temp_2 = temp;
      temp = temp->next;*/
  return (new_node);
}
