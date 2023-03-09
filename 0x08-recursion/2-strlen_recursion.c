#include "main.h"

/**
 *_strlen_recursion - returns the length of a string
 *@s:char
 *Return:length of s
*/
int _strlen_recursion(char *s)
{
return *s ? 1 + _strlen_recursion(s + 1) : 0;
}
