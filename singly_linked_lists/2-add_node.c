#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node - prints all the elements of a list_t list.
* @head: pointer to the first element of the list.
* @str: char.
* Return: number of nodes.
**/
list_t *add_node(list_t **head, const char *str)
{
list_t *newNodes = (list_t *)malloc(sizeof(list_t));
if (!newNodes)
return (NULL);
newNodes->str = strdup(str);
newNodes->len = strlen(str);
newNodes->next = *head;
*head = newNodes;
return (newNodes);
}
