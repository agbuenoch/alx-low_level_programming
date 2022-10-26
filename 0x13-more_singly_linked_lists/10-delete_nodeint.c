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

  listint_t *head_copy;
  /*  listint_t *temp;*/
  listint_t *temp2;
  unsigned int node;

  head_copy = *head;
  
  for (node = 0; node < index; node++)
    {
      head_copy = head_copy->next;
    }
  temp2 = head_copy->next->next;
  /*  temp = head_copy->next;
      free(temp);*/
  head_copy->next = temp2;

  return (1);
}
