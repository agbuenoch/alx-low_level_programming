#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 *
 * @head: pointer-to-pointer-to-listint_t
 *
 * Return: zero
*/
int pop_listint(listint_t **head)
{
  int val;
  
  if (*head == NULL)
    {
      return (0);
    }
  val = *head->n;
  
  *head = *head->next;
  
  return (val);
}
