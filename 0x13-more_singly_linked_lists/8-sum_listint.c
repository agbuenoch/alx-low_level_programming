#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list
 *
 * @head: pointer-to-pointer-listint_t
 *
 * Return: sum
*/
int sum_listint(listint_t *head)
{
int sum;
sum = 0;
if (head == NULL)
{
return (0);
}
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
