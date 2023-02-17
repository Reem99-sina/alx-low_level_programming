#include <stdio.h>

/**
*main ->all the numbers of base 16 in lowercase, by putchar
*
*Return: Always 0 (Success)
*/
int main(void)
{
char ch;
int num;

for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
