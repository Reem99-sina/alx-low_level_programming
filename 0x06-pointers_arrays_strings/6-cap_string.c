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
if (str[i] == '\t' || str[i] == ','|| str[i] == ';'|| str[i] == '!'|| str[i] == '?'|| str[i] == '"'|| str[i] == '('|| str[i] == ')'|| str[i] == '{'|| str[i] == '}' || str[i] == ' ')
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] -= 32;
}
str[i] = ' ';
}
}
return (str);
}
