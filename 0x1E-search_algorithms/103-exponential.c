#include <stdio.h>

int binary_search(int *array, int low, int high, int value)
{
while (low <= high)
{
int mid = low + (high - low) / 2;
printf("Comparing with array[%d] = %d\n", mid, array[mid]);
if (array[mid] == value)
{
return mid;
}
else if (array[mid] < value)
{
low = mid + 1;
}
else
{
high = mid - 1;
}
}
return -1;
}
int exponential_search(int *array, size_t size, int value)
{
if (array == NULL)
{
return -1;
}
int bound = 1;
while ((size_t)bound < size && array[bound] < value)
{
printf("Comparing with array[%d] = %d\n", bound, array[bound]);
bound *= 2;
}
int low = bound / 2;
int high = (size_t)bound < size ? (size_t)bound : size - 1;
printf("Exponential range: [%d, %d]\n", low, high);
return binary_search(array, low, high, value);
}
