#include "main.h"

/**
*print_last_digit - prints the last digit of a number
*@n: number to function
*Return: return last digit of number
*/
int print_last_digit(int n)
{
int r;
if (n < 0)
{
n = n * -1;
}
r = n % 10;
_putchar(r + '0');
return (r);
}