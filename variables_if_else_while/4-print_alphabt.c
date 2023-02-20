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
char a;
a = 'a';
while (a <= 'z')
{
if (a != 'e' && a != 'q')
{
putchar(a);
}
a++;
}
putchar('\n');
return (0);
}
