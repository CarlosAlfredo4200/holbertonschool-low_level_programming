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

int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
    if (ht == NULL || key == NULL || strlen(key) == 0) {
        return 0;
    }

    unsigned long index = hash(key, ht->size);
    hash_node_t *node = ht->buckets[index];


    while (node != NULL) {
        if (strcmp(node->key, key) == 0) {
            free(node->value);
            node->value = strdup(value);
            return 1;
        }
        node = node->next;
    }

    hash_node_t *new_node = create_hash_node(key, value);
    new_node->next = ht->buckets[index];
    ht->buckets[index] = new_node;
    return 1;
}
