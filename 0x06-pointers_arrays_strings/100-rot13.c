#include "main.h"
#include <string.h>

/**
 * rot13 -  encodes a string using rot13
 *@str:string
 * Return: string
 */
char *rot13(char *str)
{
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
int slen = strlen(str);

for (i = 0; i < slen; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == a[j])
{
str[i] = b[j];
break;
}
}
}
return (str);
}
