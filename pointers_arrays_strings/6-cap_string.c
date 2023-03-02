#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @cadena: This is the input string
 *
 * Return: capitalizes all words of a string
 */
char *cap_string(char *cadena)
{
int i;
if(cadena[0]>=97&&cadena[0]<=122)
{
cadena[0]-=32;
}
for(i=1;cadena[i]!='\0';i++)
{
if(cadena[i-1]==32)
{
if(cadena[i]>=97 &&cadena[i]<=122)
{
cadena[i]-=32;
}
}
}
return 0;
}
