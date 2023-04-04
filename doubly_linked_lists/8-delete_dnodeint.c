#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) 
{
  dlistint_t *current, *temp;
  unsigned int i;

  if (*head == NULL)
    return (-1);

  current = *head;

  if (index == 0)
    {
      *head = current->next;
      if (*head != NULL)
	(*head)->prev = NULL;
      free(current);
      return (1);
    }

  for (i = 0; i < index - 1; i++)
    {
      if (current->next == NULL)
	return (-1);
      current = current->next;
    }

  temp = current->next;
  if (temp == NULL)
    return (-1);
  current->next = temp->next;
  if (current->next != NULL)
    current->next->prev = current;
  free(temp);
  return (1);
}
