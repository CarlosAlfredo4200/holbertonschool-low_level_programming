#include "main.h"
/**
 * rint_rev - a function that prints a string, in reverse
 *
 * @s: This is char
 *
 */
void print_rev(char *s)
{
int i, longitud = strlen(s);
for (int i = 0; s[i] != '\0'; i++)
{
_putchar(s[longitud - 1]);
longitud--;
}
_putchar("\n");
}
