#include "hash_tables.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

hash_node_t *create_hash_node(const char *key, const char *value)
{
hash_node_t *node;
  node = malloc(sizeof(hash_node_t));
  if (node == NULL)
  {
    return NULL;
  }

  node->key = strdup(key);
  node->value = strdup(value);
  node->next = NULL;

  return node;
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
  if (ht == NULL || key == NULL || strlen(key) == 0)
  {
    return 0;
  }


  index = hash_djb2((const unsigned char *)key) % ht->size;

  new_node = create_hash_node(key, value);
  if (new_node == NULL)
  {
    return 0;
  }

  if (ht->array[index] == NULL)
  {
    ht->array[index] = new_node;
  }
  else
  {
 
    new_node->next = ht->array[index];
    ht->array[index] = new_node;
  }

  return 1;
}
