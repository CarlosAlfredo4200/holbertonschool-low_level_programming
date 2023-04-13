#include "hash_tables.h"

/**
 * hash_table_get - Get a value from the hash table.
 * @ht: Hash table.
 * @key: Key.
 *
 * Return: The value if works, NULL if doesn't.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *node;
if (ht == NULL || key == NULL)
return NULL;
index = hash_djb2((const unsigned char *)key) % ht->size;
node = ht->array[index];
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
return node->value;
node = node->next;
}
return NULL;
}
