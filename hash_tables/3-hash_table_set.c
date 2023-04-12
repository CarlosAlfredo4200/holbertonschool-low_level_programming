#include "hash_tables.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    if (ht == NULL || key == NULL || strcmp(key, "") == 0)
    {
        return 0; // Invalid input
    }

    unsigned long int index = hash_djb2((const unsigned char *)key) % ht->size;

    hash_node_t *new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        return 0;
    }

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return 0;
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return 0;
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1; // Success
}

 
