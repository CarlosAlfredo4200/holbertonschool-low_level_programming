#include "hash_tables.h"

/**
 * hash_table_get - Get a value from the hash table.
 * @ht: Hash table.
 * @key: Key.
 *
 * Return: The value if works, NULL if doesn't.
 */
// Function to retrieve a value associated with a key in a hash table
char *hash_table_get(const hash_table_t *ht, const char *key)
{
  unsigned long int index;
  hash_node_t *node;
  if (ht == NULL || key == NULL)
    return NULL;

  // Calculate the hash value for the given key
  index = hash_djb2((const unsigned char *)key) % ht->size;

  // Traverse the linked list at the hash index and search for the key
  node = ht->array[index];
  while (node != NULL)
    {
      if (strcmp(node->key, key) == 0)
	return node->value; // Key found, return the associated value

      node = node->next;
    }

  return NULL; // Key not found, return NULL
}
