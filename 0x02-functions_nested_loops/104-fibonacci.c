#include <stdio.h>

/**
*main - prints the first 98 Fibonacci numbers, starting with 1 and 2
*Return: always (0)
*/
int main(void)
{
int num1, num2, next;
int i;

num1 = 1;
num2 = 2;
next = num1 + num2;
printf("%d, %d, %d, ", num1, num2, next);
for (i = 3; i < 99; i++)
{
num1 = num2;
num2 = next;
next = num1 + num2;
if (i == 98)
{
printf("%d", next);
}
else
{
printf("%d, ", next);
}
}
printf("\n");
return (0);
}
