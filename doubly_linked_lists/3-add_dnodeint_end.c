#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: pointer to the first element of the list.
 * @n: int.
 * Return: the address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *current_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
current_node = *head;
while (current_node->next != NULL)
current_node = current_node->next;
current_node->next = new_node;
new_node->prev = current_node;
return (new_node);
}
