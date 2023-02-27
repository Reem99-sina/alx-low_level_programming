#include "main.h"
#include <string.h>

/**
 * puts_half -  prints half of a string
 *@str:string to print half of it
 * Return: no return
 */
void puts_half(char *str)
{
int slen = strlen(str);
int i;

for (i = slen / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
