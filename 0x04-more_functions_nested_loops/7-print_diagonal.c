#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: number
 *Return:no retrun
*/
void print_diagonal(int n)
{
int i;
int j;

if (n > 0)
{
for (i = 0; i < n; i++)
{
j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
