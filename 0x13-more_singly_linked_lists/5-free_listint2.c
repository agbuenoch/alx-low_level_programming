#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list.
 *
 * @head: pointer-to-listint_t
*/
void free_listint2(listint_t **head)
{
listint_t *temp = *head;
if(*head == NULL)
{
free(*head);
}
while (*head)
{
temp = temp->next;
free(*head);
*head = temp;
}
}
