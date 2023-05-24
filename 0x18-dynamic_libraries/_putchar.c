#include "main.h"

/**
_putchar - put char
@c: char
ReturnL:0 or 1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
