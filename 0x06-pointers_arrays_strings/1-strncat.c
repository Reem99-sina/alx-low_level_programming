#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_strncat -  concatenates two strings
 *@dest: first string
 *@src:second string
 *@n:number
 *Return:the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int dlen = strlen(dest);

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dlen + i] = src[i];
}
return (dest);
}
