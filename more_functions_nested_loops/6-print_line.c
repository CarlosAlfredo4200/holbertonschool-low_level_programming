#include "main.h"
/**
 * print_line - trailing whitespace
 *@n:n is the number of times the character _ should be printed
 * Return: 0
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
