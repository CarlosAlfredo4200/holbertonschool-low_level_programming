#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *print - alfhabet
 *
 *Return: Always 0 (success)
 */

void print_alphabet(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
