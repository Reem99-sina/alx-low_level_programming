#include <stdio.h>

/**
*main -> prints all possible combinations of single-digit numbers., by putchar
*
*Return: Always 0 (Success)
*/
int main(void)
{
int num;
int sen;

for (num = 0; num < 10; num++)
{
for (sen = num + 1; sen < 10; sen++)
{
putchar(num + '0');
putchar(sen + '0');
if (num == 8)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
