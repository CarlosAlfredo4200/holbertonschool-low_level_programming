#include "main.h"
/**
* cap_string - Write a function that capitalizes all words of a string.
*
* @entry: This is the input string
*
* Return: String capitalized
*/
char *cap_string(char *cadena)
{
int i = 0;
while (cadena[i])
{
while (!(cadena[i] >= 'a' && cadena[i] <='z'))
i++;
if (
cadena[i - 1] == ' ' ||
cadena[i - 1] == '\t' ||
cadena[i - 1] == '\n' ||
cadena[i - 1] == ',' ||
cadena[i - 1] == '.' ||
cadena[i - 1] == ';' ||
cadena[i - 1] == '!' ||
cadena[i - 1] == '?' ||
cadena[i - 1] == '"' ||
cadena[i - 1] == '(' ||
cadena[i - 1] == ')' ||
cadena[i - 1] == '{' ||
cadena[i - 1] == '}' ||
i == 0 )
cadena[i] -=32;
i++;
}
return cadena;
}
