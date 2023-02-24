#include "main.h"
/**
* print_diagonal - a function that draws a diagonal line on the terminal.
*@n:n is the number  
* Return: 0
*/
void print_diagonal(int n)
{
int i, k;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (k = 0; k < i ; k++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}else
{
_putchar('\n');
}
}
