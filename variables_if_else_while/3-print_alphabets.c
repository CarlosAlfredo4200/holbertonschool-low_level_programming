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
    int c;
    int d;
    for (c = 'a'; c <= 'z'; c++)
    {
	putchar(c);
    }
    for (d = 'a'; d <= 'z'; d++)
    {
	putchar(toupper(d));
    }
	putchar("\n");
    return (0);
}
