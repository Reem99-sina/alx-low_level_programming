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
int sum;


for (num = 0; num < 8; num++)
{
for (sen = num + 1; sen < 9; sen++)
{
for (sum = sen + 1; sum < 10; sum++)
{
putchar(num + '0');
putchar(sen + '0');
putchar(sum + '0');
if (num == 7 && sen == 8 && sum == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
