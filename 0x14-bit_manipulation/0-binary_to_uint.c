#include "main.h"
#include <stddef.h>
/**
 * check_valid_string - checks if a string has only 0's and 1's
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int *check_valid_string(const char *b)
{
if (b == NULL)
return (0);

while (*b)
{
if (*b != '1' && *b != '0')
return (0);
b++;
}
return (1);
}
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int len = 0;

if (!check_valid_string(b))
{
return (0);
}
if ((b[len] == '\0') || (b == NULL))
{
return (0);
}
while (b[len])
{
if (b[len] != '1' && b[len] != '0')
{
return (0);
}
num <<= 1;
num += b[len] - '0';
len++;
}
return (num);
}

