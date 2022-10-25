#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 *
 * @head: pointer-to-pointer-to-listint_t
 * @index: integer parameter
 *
 * Return: integer
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

  listint_t *temp;
  unsigned int count;
  unsigned int co;

  count = 0;
  co = 0;
  
  while (*head)
    {
      count++;
      *head = (*head)->next;
    }
  if (index > count)
    {
      return (-1);
    }
  while (*head)
    {
      co++;
      if (index == co)
	{
	  temp = *head; 
	}
      *head = (*head)->next;
      free(temp);
      return (1);
    }
  return (0);
}
