#include "main.h"
/**
* _abs - prints the absolute value of a number
*@i: number targeted
*Return: returns 0
*/
int _abs(int i)
{
if (i > 0)
return (i + '\n');
else if (i < 0)
return (-i + '\n');
else
return (0 + '\n');
}
