#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line
 *@size:n is the number
 * Return: 0
 */
void print_square(int size)
{
int i, k;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (k = 0; k < size; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
