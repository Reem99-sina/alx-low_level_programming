#include "monty.h"

/**
 *push - pushes an element to the stack
 *@stack:to push number in top the stack
 *@top:pointer to top of stack
 *@arg:arg of number
 @line_number:line_number 
*/
void push(int stack[], int *top, char *arg, int line_number)
{
if (!arg)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
char *endptr;
int value = strtol(arg, &endptr, 10);
if (*endptr != '\0')
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
stack[*top] = value;
(*top)++;
}
void pall(int stack[], int top)
{
for (int i = top - 1; i >= 0; i--)
{
printf("%d\n", stack[i]);
}
}
