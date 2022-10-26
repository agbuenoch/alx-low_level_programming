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
  listint_t *temp;

  count = 0;
  temp = malloc(sizeof(listint_t) * n);
  if (temp == NULL)
    {
      return (NULL);
    }
  
  for (count = 0; count < idx; count++)
    {
      if (*head == NULL)
	{
	  return (NULL);
	}
      temp = (*head)->next;
    }
  temp = temp->next;
  return (temp);
}
