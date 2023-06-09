#include "hash_tables.h"

/**
 *hash_table_set -  adds an element to the hash table
 *@ht: table
 *@key:key
 *@value:value
 *Return:Returns: 1 if it succeeded, 0 otherwise
*/
char *hash_table_get(hash_table_t *ht, char *key)
{
ht_item *node;
unsigned long int index;
if (ht == NULL || key == NULL)
{
return (NULL);
}
index = key_index((unsigned char *)key, ht->size);
if (index >= ht->size)
{
return (NULL);
}
node = ht->array[index];
while (node && strcmp(node->key, key) != 0)
{
node = node->next;
}
return ((node == NULL) ? NULL : node->value);
}
