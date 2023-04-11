#include "hash_tables.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// Función para crear una nueva tabla hash
hash_table_t* create_hash_table(int size) {
    hash_table_t *ht = (hash_table_t*) malloc(sizeof(hash_table_t));
    ht->size = size;
    ht->buckets = (hash_node_t**) calloc(size, sizeof(hash_node_t*));
    return ht;
}

// Función para calcular el hash de una cadena de caracteres
unsigned long hash(const char *str, int size) {
    unsigned long hash = 5381;
    int c;
    while ((c = *str++))
        hash = ((hash << 5) + hash) + c;
    return hash % size;
}

// Función para crear un nuevo nodo de la tabla hash
hash_node_t* create_hash_node(const char *key, const char *value) {
    hash_node_t *node = (hash_node_t*) malloc(sizeof(hash_node_t));
    node->key = strdup(key);
    node->value = strdup(value);
    node->next = NULL;
    return node;
}

// Función para agregar o actualizar un elemento en la tabla hash
int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
    if (ht == NULL || key == NULL || strlen(key) == 0) {
        return 0; // No se permite tabla hash nula, clave nula o clave vacía
    }

    unsigned long index = hash(key, ht->size);
    hash_node_t *node = ht->buckets[index];

    // Buscar si la clave ya existe en la tabla hash
    while (node != NULL) {
        if (strcmp(node->key, key) == 0) {
            free(node->value); // Liberar la memoria del valor existente
            node->value = strdup(value); // Duplicar y actualizar el valor
            return 1; // Se ha actualizado el valor existente
        }
        node = node->next;
    }

    // La clave no existe, crear un nuevo nodo y agregarlo a la tabla hash
    hash_node_t *new_node = create_hash_node(key, value);
    new_node->next = ht->buckets[index];
    ht->buckets[index] = new_node;
    return 1; // Se ha agregado un nuevo elemento a la tabla hash
}
