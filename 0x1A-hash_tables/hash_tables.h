#ifndef HASH_TABLES_H
#define HASH_TABLES_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ht_item
{
    char* key;
    char* value;
} ht_item;
typedef struct hash_table_t
{
    // Contains an array of pointers to items.
    Ht_item** items;
    int size;
    int count;
} hash_table_t;
hash_table_t *hash_table_create(unsigned long int size);
#endif
