#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number
* @num: integer input
* Return: The last digit of a number
*/
int print_last_digit(int num)
{
int ultimo = num % 10;
if (ultimo < 0)
{
ultimo = (-1 * ultimo);
}
_putchar(ultimo + '0');
return (ultimo);
}
