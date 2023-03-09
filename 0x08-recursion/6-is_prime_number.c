#include "main.h"

/**
 *is_prime_number -  returns 1 if the input integer is a prime number, otherwise return 0
 *@n:number
 *Return:0 if not prime number or 1
*/
int is_check(int n, int i)
{
if (i == n / 2)
{
return (1);
}
if (n % i == 0)
{
return (0);
}

return (is_check(n, i + 1));
}

int is_prime_number(int n)
{
int i = 2;
if (n <= 1)
{
return (0);
}
if (n >= 2 && n <= 3)
{
return (1);
}
return (is_check(n, i));
}
