#include "lists.h"
#include "stdlib.h"
/**
 * free_list - function that frees a list_t list
 *
 * @head: list_t pointer
*/
void free_list(list_t *head)
{
  free(head);
}
