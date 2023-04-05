#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: pointer to the first element of the list.
 * Return: number of nodes.
 **/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
