#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 *Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
    int c, i;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
