#include <stdio.h>

/**
*main - prints the first 50 Fibonacci numbers, starting with 1 and 2
*Return: always (0)
*/
int main(void)
{
int num1, num2, next;
int i, sum;

num1 = 1;
num2 = 2;
sum = 0;
next = num1 + num2;
if (next % 2 == 0)
{
sum += next;
}
if (num1 % 2 == 0)
{
sum += num1;
}
if (num2 % 2 == 0)
{
sum += num2;
}
while (next < 4000000)
{
num1 = num2;
num2 = next;
next = num1 + num2;
if (next % 2 == 0)
{
sum += next;
}
}
printf("%d\n", sum);
return (0);
}
