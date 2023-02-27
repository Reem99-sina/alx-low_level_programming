#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
 */
int main(void)
{
int num;

srand(time(NULL));
num = rand();
printf("%i\n", num);
return (0);
}
