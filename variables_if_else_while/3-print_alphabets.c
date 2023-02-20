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
    int f;
    for (c = 'a'; c <= 'z'; c++)
    {
	putchar(c);
    }
    for (f = 'A'; f <= 'Z'; f++)
    {
	putchar(f);
    }
    return (0);
}
