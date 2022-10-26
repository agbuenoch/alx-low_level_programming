#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list
 *
 * @head: pointer-to-listint_t
 * @index: integer parameter
 *
 * Return: listint_t pointer
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
  listint_t *temp;
  unsigned int count;
  count = 0;


  if (head == NULL)
    {
      return (NULL);
    }

  while (head)
    {
      ++count;
      if (index == count)
	{
	  temp = head;
	}
      head = head->next;
    }
  if (index > count)
    {
      return (NULL);
    }
  return (temp);
}
