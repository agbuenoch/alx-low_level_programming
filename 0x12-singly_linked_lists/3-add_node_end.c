#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 *
 * @head: pointer-to-pointer parameter of type list_t
 * @str: character-pointer
 *
 * Return: list_t pointer
*/
int str_len(const char *str)
{
  int len;
  while (*str)
    {
      len++;
      str++;
    }
  return (len);
}
list_t *add_node_end(list_t **head, const char *str)
{
  int len;
  list_t *new_node;

  len = str_len(str);
  new_node = malloc(sizeof(*new_node) * (len + 1));
  if (new_node == NULL)
    {
      return (NULL);
    }
  
  new_node->str = strdup(str);
  new_node->len = str_len(str);

  while (*head == NULL)
    {
      *head = new_node;
      
    }

  return (*head);
}
