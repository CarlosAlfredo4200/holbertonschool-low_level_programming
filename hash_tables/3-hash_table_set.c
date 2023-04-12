#include "hash_tables.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;
    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + (c);
    }
    return (hash);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    if (ht == NULL || key == NULL || *key == '\0')
    {
        return 0; // Si la tabla hash o la clave son nulas o la clave está vacía, retornar 0 (fallo)
    }

    unsigned long int index = hash_djb2((const unsigned char *)key) % ht->size; // Calcular el índice en la tabla hash

    hash_node_t *node = ht->array[index]; // Obtener el nodo en la posición del índice

    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
        {
            // Si la clave ya existe, actualizar el valor y retornar 1 (éxito)
            free(node->value); // Liberar el valor anterior
            node->value = strdup(value); // Duplicar y asignar el nuevo valor
            return 1;
        }
        node = node->next; // Avanzar al siguiente nodo en caso de colisión
    }

    // Si la clave no existe, crear un nuevo nodo y agregarlo al principio de la lista
    hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        return 0; // Si no se pudo asignar memoria, retornar 0 (fallo)
    }

    new_node->key = strdup(key);     // Duplicar y asignar la clave al nuevo nodo
    new_node->value = strdup(value); // Duplicar y asignar el valor al nuevo nodo
    new_node->next = ht->array[index]; // El siguiente nodo es el que estaba previamente en esa posición del índice
    ht->array[index] = new_node; // El nuevo nodo se convierte en el primer nodo en esa posición del índice

    return 1; // Retornar 1 (éxito)
}
