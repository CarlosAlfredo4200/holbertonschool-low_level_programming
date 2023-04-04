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
void free_list(list_t *head)
{
  list_t *current;
  while (head != NULL)
    {
      current = head;
      head = head->next;
      free(current->str);
      free(current);
    }
}
