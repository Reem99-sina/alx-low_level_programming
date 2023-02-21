#include "main.h"
#include <stdio.h>

/**
*jack_bauer - prints every minute of the day of Jack Bauer
*Return: no return
*/
void jack_bauer(void)
{
int i;
int j;

for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
printf("%d:%d\n", i, j);
}
}
}
