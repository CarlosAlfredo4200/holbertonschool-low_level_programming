#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* print_dlistint - a function that prints all the elements of a
* @h: head.
* Return: number of nodes.
**/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
