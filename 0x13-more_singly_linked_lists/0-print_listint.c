#include <stdio.h>
#include "lists.h"
/**
 *print_listint - prints all the elements of a listint_t list
 *@h:pointer to head of list
 *Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t index = 0;
while (h)
{
index++;
printf("%d\n", h->n);
h = h->next;
}
return (index);
}
