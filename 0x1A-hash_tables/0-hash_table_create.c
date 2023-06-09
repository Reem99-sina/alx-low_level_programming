#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *@size:size
 *Return:pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t* table = malloc(sizeof(hash_table_t));
if (table == NULL)
{
return (NULL);
}
table->size = size;
table->count = 0;
table->items = calloc(table->size, sizeof(ht_item*));
if (table->items == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
table->items[i] = NULL;
}
return (table);
}
