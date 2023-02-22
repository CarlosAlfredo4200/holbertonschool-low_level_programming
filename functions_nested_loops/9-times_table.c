#include "main.h"
/**
 * times_table -  a function that prints the 9 times table
 * row = row, col = column, siz = digits of current result
 * Return: times table
 */
void times_table(void)
{
int col, row, siz;
for (row = 0; row <= 9; row++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (col = 1; col <= 9; col++)
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
if (col < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
