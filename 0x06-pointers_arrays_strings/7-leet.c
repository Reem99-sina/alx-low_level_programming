#include "main.h"
#include <string.h>

/**
 * leet - encodes a string into 1337
 *@str: string
 * Return: string
 */
char *leet(char *str)
{
char s[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
int i, j;

while (str[i])
{
for (j = 0; j < 8; j++)
{
if (str[i] == s[j] || str[i] - 32 == s[j])
{
str[i] = j + '0';
}
}
i++;
}
return (str);
}
