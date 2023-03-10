#include <stdio.h>

/**
* main - prints all arguments
*@argc: number of arguments
*@argv:array of arguments
*Return: the number of arguments
*/
int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
