#include "main.h"
#include <string.h>

/**
 * rev_string -  reverses a string
 *@s:string
 * Return: no return
 */
void rev_string(char *s)
{
int slen = strlen(s);
int i = slen - 1;
int j = 0;
char ch;

while (i > j)
{
ch = s[i];
s[i] = s[j];
s[j] = ch;
i--;
j++;
}

}

