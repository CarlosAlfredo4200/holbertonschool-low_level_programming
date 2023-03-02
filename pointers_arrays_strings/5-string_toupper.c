#include "main.h"
/**
* string_toupper - Write a function that changes all lowercase 
* string to uppercase.
*
* @cadena: This is the input string
*
* Return: Lowercase changed to uppercase of the string
*/
char *string_toupper(char *cadena)
{
int i;
for (i = 0; cadena[i] != '\0'; i++)
{
if (cadena[i] >= 'a' && cadena[i] <= 'z')
cadena[i] = (int)cadena[i] - 32;
}
return (cadena);
}
