#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
*_islower - Write a function that checks for lowercase character.
*c: single letter input
*Return: 1 if int c is lowercase, 0 if otherwise
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
