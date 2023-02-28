#include "main.h"
/**
* puts_half - a function that prints half of a string, followed by a new line
 *
* @str: This is char
 *
 */

void puts_half(char *str)
{
  int k, i;
    int longitud = 0;
    for (k = 0; str[k] != '\0'; k++)
    {
        longitud++;
    }
    int size = longitud / 2;
    for (i = size; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    
}
