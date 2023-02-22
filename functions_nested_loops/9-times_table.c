#include "main.h"
/**
 * times_table -  a function that prints the 9 times table
 * row = row, col = column, siz = digits of current result
 * Return: times table
 */
void times_table(void)
{
int col, row, siz;
for (col = 0; row <= 9; row++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (row = 1; row <= 9; row++)
{
siz = (col * row);
if ((siz / 10) > 0)
{
_putchar((siz / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((siz % 10) + '0');
if (row < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
