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
len = 0;
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
list_t *last_node;
len = str_len(str);
new_node = malloc(sizeof(list_t) * (len + 1));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = len;
new_node->next = NULL;
if (*head == NULL)
*head = new_node;
else
{
last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = new_node;
}
return (*head);
}
