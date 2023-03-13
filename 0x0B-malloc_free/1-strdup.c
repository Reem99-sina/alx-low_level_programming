#include "string.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
int index;
char *duplicate;

if (str == NULL)
{
return (NULL);
}
duplicate = malloc(sizeof(char) * (strlen(str)));
if (duplicate == NULL)
{
return (NULL);
}
for (index = 0; str[index]; index++)
{
duplicate[index] = str[index];
}
duplicate[strlen(str)] = '\0';
return (duplicate);
}
