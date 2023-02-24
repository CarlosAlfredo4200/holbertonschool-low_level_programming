#include "main.h"
/**
* print_line - trailing whitespace
*@n:n is the number of times the character _ should be printed
* Return: 0
*/
void print_diagonal(int n)
{
int i, k;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('\\');
_putchar('\n');
for (k = 0; k < i + 1; k++){
_putchar(' ');
}
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
