#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *@size:size
 *Return:pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *table = malloc(sizeof(hash_table_t));
if (table == NULL)
{
return (NULL);
}
table->size = size;
table->array = calloc(table->size, sizeof(ht_item *) * size);
if (table->array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
table->array[i] = NULL;
}
return (table);
}
