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
unsigned int count;
for (count = 0; count < index; count++)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
}
return (head);
}
