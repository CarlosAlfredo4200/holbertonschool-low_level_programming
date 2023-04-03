#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t print_list(const list_t *h)
{
size_t numNodes = 0;
while (h != NULL)
{
if (h->str)
printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
numNodes++;
h = h->next;
}
return (numNodes);
}
