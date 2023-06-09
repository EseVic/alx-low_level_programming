#include "hash_tables.h"
/**
 *hash_table_set - adds a key, value pair to the hash table
 *@ht: pointer to the hash
 *@key: pointer to the key
 *@value: value to add
 *Return: 1 if is success or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long idx, size;
hash_node_t *node;

if (ht  == NULL || key == NULL || value == NULL)
return (0);

size = ht->size;
idx = key_idx((const unsigned char *)key, size);

if (ht->array[idx] != NULL && strcmp(ht->array[idx]->key, key) == 0)
{
ht->array[idx]->value = strdup(value);
return (1);
}

node = malloc(sizeof(hash_node_t));

if (node == NULL)
return (0);

node->key = strdup(key);
node->value = strdup(value);
node->next = ht->array[idx];
ht->array[idx] = node;
return (1);
}
