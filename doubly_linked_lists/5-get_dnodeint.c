#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @index: int
 * Return: number of nodes.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *current = head;
for (i = 0; i < index && current != NULL; i++)
current = current->next;
return (current);
}
