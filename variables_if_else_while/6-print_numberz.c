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
int c = 0;
while (c < 10)
{
putchar(c + '0');
c++;
}
putchar('\n');
return (0);
}
