#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - prints all the elements of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: char.
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

  return count;
}
