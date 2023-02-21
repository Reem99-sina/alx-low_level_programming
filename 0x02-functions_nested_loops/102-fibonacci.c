#include <stdio.h>

/**
*main - prints the first 50 Fibonacci numbers, starting with 1 and 2
*Return: always (0)
*/
int main(void)
{
long num1, num2, next;
int i;

num1 = 1;
num2 = 2;
next = num1 + num2;
printf("%ld, %ld, %ld, ", num1, num2, next);
for (i = 3; i <= 50; i++)
{
num1 = num2;
num2 = next;
next = num1 + num2;
printf("%ld, ", next);
}
printf("\n");
return (0);
}
