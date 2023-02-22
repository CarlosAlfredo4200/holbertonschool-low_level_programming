#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
*_islower - Write a function that checks for lowercase character.
*Return: Always 0 (success)
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
