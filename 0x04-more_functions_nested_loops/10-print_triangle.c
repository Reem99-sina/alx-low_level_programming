#include "main.h"
#include <stdio.h>

/**
 *print_triangle - prints a triangle
 *@size: size of triangle
 *Return: no return
*/
void print_triangle(int size)
{
int i;
int j;
int z;

for (i = 0; i < size; i++)
{
z = 0;
while (z < size - i - 1)
{
_putchar(' ');
z++;
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
