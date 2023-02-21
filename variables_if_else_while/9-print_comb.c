#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
putchar(x + '0');
if (x < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
