#include "main.h"
#include <string.h>
#include <math.h>
#include <stdio.h>
/**
 * puts_half -  prints half of a string
 *@str:string to print half of it
 * Return: no return
 */
void puts_half(char *str)
{
int slen = strlen(str);
int i;

if (slen % 2 == 0)
{
slen = slen / 2;
}
else
{
slen = (slen / 2) + 1;
}
for (i = slen; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
