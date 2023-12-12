#include "search_algos.h"
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
size_t jump;
size_t left;
size_t i;
size_t step;
jump = sqrt(size);
left = 0;
if (array == NULL)
{
return -1;
}
for(step = jump; step < size && array[step] < value; step += jump)
{
printf("Value checked array[%lu] = [%d]\n", step, array[step]);
left = step;
}
printf("Value found between indexes [%lu] and [%lu]\n", left, left + jump);
for (i = left; i <= left+ jump && i < size; ++i)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return i;
}
}
return -1;
}
