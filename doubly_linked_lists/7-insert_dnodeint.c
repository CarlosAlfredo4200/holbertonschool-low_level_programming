#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * sum_dlistint - Returns the sum of all nodes in a doubly linked list
 * @h: Pointer to the head node of the list
 * @idx: index of the list
 * @n :int
 * Return: The sum of all nodes in the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int i;
if (h == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->prev = NULL;
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}
temp = *h;
for (i = 0; temp != NULL && i < idx; i++)
temp = temp->next;
if (temp == NULL && i == idx)
{
free(new_node);
return (add_dnodeint_end(h, n));
}
else if (temp != NULL)
{
new_node->prev = temp->prev;
new_node->next = temp;
temp->prev->next = new_node;
temp->prev = new_node;
return (new_node);
}
free(new_node);
return (NULL);
}
