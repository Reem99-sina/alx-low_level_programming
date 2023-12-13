#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using Jump search.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: A pointer to the first node where value is located.
 *         NULL if the value is not present or if the list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t jump = sqrt(size);
listint_t *current = list, *prev = NULL;
size_t i;
if (list == NULL)
{
return NULL;
}

while (current != NULL && current->n < value)
{
prev = current;
for (i = 0; i < jump && current->next != NULL; ++i)
{
current = current->next;
}

printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
}

printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
while (prev != NULL && prev->index <= current->index)
{
printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

if (prev->n == value)
{
return prev;
}

prev = prev->next;
}

return NULL;
}
