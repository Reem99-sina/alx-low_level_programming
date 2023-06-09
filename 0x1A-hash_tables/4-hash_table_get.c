#include "hash_tables.h"

/**
 *hash_table_set -  adds an element to the hash table
 *@ht: table
 *@key:key
 *@value:value
 *Return:Returns: 1 if it succeeded, 0 otherwise
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
ht_item *node;
unsigned long int index;
if (h1 == NULL || key == NULL || key == "\0")
{
return (NULL);
}
index = key_index((const unsigned char *)key, h1->size);
if (index >= h1->size)
{
return (NULL);
}
node = h1->array[index];
while (node && strcmp(node->key, key) != 0)
{
node = node->next;
}
return ((node == NULL) ? NULL : node->value);
}
