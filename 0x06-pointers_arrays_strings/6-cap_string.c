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
int i;
int length = 0;

length = strlen(str);
for (i = 0; i < length; i++)
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '.')
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z' && str[i + 1] != ' ')
{
str[i + 1] -= 32;
}
if (str[i] == '.' && (str[i + 1] == '\t' || str[i + 1] == '\n'))
{
if (str[i + 2] >= 'a' && str[i + 2] <= 'z')
{
str[i + 2] -= 32;
}
}
if (str[i] == '\t')
{
str[i] = ' ';
}
}
}
return (str);
}
