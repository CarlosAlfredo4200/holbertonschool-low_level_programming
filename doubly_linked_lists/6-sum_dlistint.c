#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * sum_dlistint - Returns the sum of all nodes in a doubly linked list
 * @head: Pointer to the head node of the list
 * Return: The sum of all nodes in the list
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;
while (current)
{
sum += current->n;
current = current->next;
}
return (sum);
}
