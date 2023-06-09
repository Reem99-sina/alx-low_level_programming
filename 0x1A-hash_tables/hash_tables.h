#ifndef HASH_TABLES_H
#define HASH_TABLES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct ht_item - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 */
typedef struct ht_item
{
    char* key;
    char* value;
} ht_item;
/**
 * struct hash_table_t - Hash table data structure
 *
 * @size: The size of the array
 * @items: An array of size @size
 * @count:count
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_t
{
    ht_item** array;
    unsigned long int size;
} hash_table_t;
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
#endif
