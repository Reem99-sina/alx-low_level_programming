#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: Value to search for.
 *
 * Return: A pointer on the first node where value is located.
 * If value is not present in list or if list is NULL, return NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *current, *express;

if (list == NULL)
return NULL;

express = list;
while (express->express != NULL && express->express->n < value)
{
printf("Value checked at index [%lu] = [%d]\n",express->express->index, express->express->n);
express = express->express;
}

printf("Value found between indexes [%lu] and [%lu]\n",express->index, express->express->index);

current = express;
while (current != NULL && current->n <= value)
{
printf("Value checked at index [%lu] = [%d]\n",current->index, current->n);

if (current->n == value)
return current;

current = current->next;
}

return NULL;
}
