#include <stdio.h>
#include "search_algos.h"
int recursive_binary_search(int *array, int low, int high, int value)
{
if (low <= high)
{
int mid = low + (high - low) / 2;
int i;
printf("Searching in array:");
for (i = low; i <= high; ++i)
{
printf(" %d", array[i]);
if (i < high)
{
printf(",");
}
}
printf("\n");

if (array[mid] == value)
{
while (mid > low && array[mid - 1] == value)
{
mid--;
}
return mid;
}
else if (array[mid] < value)
{
return recursive_binary_search(array, mid + 1, high, value);
}
else
{
return recursive_binary_search(array, low, mid - 1, value);
}
}

return -1;
}

int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL)
{
return -1;
}

return recursive_binary_search(array, 0, size - 1, value);
}
