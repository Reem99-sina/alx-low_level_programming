#include <stdio.h>

/**
 *main - prints the largest prime factor of the number
 *Return: 0
*/
int main(void)
{
long num = 612852475143;
long diviso = 2;
long largestdivi = 0;

while (num != 1)
{
if (num % diviso == 0)
{
num = num / diviso;
largestdivi = diviso;
}
diviso += 1;
}
printf("%ld\n", largestdivi);
return (0);
}
