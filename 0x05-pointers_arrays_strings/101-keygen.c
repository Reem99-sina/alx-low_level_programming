#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
 */
int main(void)
{
char c;
int num;

srand(time(NULL));
while (num <= 2645)
{
c = rand() % 128;
num += c;
}
printf("%d\n", 2772 - num);
return (0);
}
