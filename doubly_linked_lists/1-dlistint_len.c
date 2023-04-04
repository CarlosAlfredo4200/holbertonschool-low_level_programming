#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* dlistint_len - unction that returns the number of elements
* @h: head
* Return: number of nodes.
**/
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
