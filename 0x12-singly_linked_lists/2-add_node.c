#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: pointer-to-pointer-to-list_t
 * @str: constant character-pointer
 *
 * Description: Duplicate any given strings into a
 * memory storage. If the duplicates fails, then
 * the pointer to the newly created node will be free.
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
char *duplicate_str(const char *src)
{
int len;
char *dest;
char *dest_starting_point;
len = str_len(src);
dest = malloc(sizeof(*dest) * (len + 1));
if (dest == NULL)
{
return (NULL);
}
dest_starting_point = dest;
while (*src)
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (dest_starting_point);
}
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
new_node = malloc(sizeof(*new_node));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = duplicate_str(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = str_len(str);
new_node->next = *head;
*head = new_node;
return (*head);
}
