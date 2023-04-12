#include "hash_tables.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Hash function using djb2 algorithm
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash = 5381;
    int c;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c;
    }
    return hash;
}

// Function to create a new hash table
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
    {
        return NULL;
    }

    ht->size = size;
    ht->array = malloc(size * sizeof(hash_node_t *));
    if (ht->array == NULL)
    {
        free(ht);
        return NULL;
    }

    for (unsigned long int i = 0; i < size; i++)
    {
        ht->array[i] = NULL;
    }

    return ht;
}

// Function to add an element to the hash table
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    if (ht == NULL || key == NULL || strcmp(key, "") == 0)
    {
        return 0; // Invalid input
    }

    unsigned long int index = hash_djb2((const unsigned char *)key) % ht->size;

    // Create a new hash node
    hash_node_t *new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        return 0; // Memory allocation failed
    }

    new_node->key = strdup(key); // Duplicate the key
    if (new_node->key == NULL)
    {
        free(new_node);
        return 0; // Memory allocation failed
    }

    new_node->value = strdup(value); // Duplicate the value
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return 0; // Memory allocation failed
    }

    // Insert the new node at the beginning of the list
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1; // Success
}

 
