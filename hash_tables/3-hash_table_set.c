#include "hash_tables.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
    {
        unsigned long int index;
        hash_node_t *new_node;
    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return 0;

    index = hash_djb2((const unsigned char *)key) % ht->size;
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return 0;

    char *key_dup = strdup(key);
    if (key_dup == NULL) {
        free(new_node);
        return 0;
    }

    char *value_dup = strdup(value);
    if (value_dup == NULL) {
        free(key_dup);
        free(new_node);
        return 0;
    }

    new_node->key = key_dup;
    new_node->value = value_dup;
    new_node->next = NULL;

    if (ht->array[index] == NULL) {
        ht->array[index] = new_node;
    } else {
        
        new_node->next = ht->array[index];
        ht->array[index] = new_node;
    }

    return 1;
}
