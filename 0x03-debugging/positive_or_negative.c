#include <stdio.h>

/**
*positive_or_negative - print  the variable i is positive or negative
*@i: check number
*Return: no return
*/
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
}
