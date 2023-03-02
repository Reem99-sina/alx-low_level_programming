#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 *@str:string
 * Return:string
 */
char *cap_string(char *str)
{
int i, j;
int length = 0;
int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

length = strlen(str);
for (i = 0; i < length; i++)
{
for (j = 0; j < 13; j++)
{
if (str[i] == separators[j])
{
if (str[i + 1] >= 97 && str[i + 1] <= 122)
{
str[i + 1] -= 32;
break;
}
}
}
}
return (str);
}
